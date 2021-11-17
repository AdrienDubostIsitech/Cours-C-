#include <iostream>
#include "Jeu.h"
#include "WordList.h"
#include <array>
#include <chrono>


using namespace std;

//Fonction du Dessin du pendu en fonction du nombres d'erreurs du joueurs
void DessinPendu(int Error)
{
    switch(Error)
    {
    case 1:
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout << endl;
        cout<<" -- "<<endl;
        break;
    case 2 :
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 3:
        cout <<  "------- "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 4:
       cout <<  "------- "<<endl;
        cout << " |/ "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 5:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 6:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " |     o"<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 7:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " |     o"<<endl;
        cout << " |     |"<<endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 8:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " |     o"<<endl;
        cout << " |    /|\\"<< endl;
        cout << " | "<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    case 9:
        cout <<  "------- "<<endl;
        cout << " |/    |"<<endl;
        cout << " |     o"<<endl;
        cout << " |    /|\\"<<endl;
        cout << " |    / \\"<<endl;
        cout << " | "<<endl;
        cout << "-|- "<<endl;
        break;
    default:
        break;
    }
}

//Fonction qui permet au joueurs de soumettre une lettre
void PlayerPropositionFunc(char &PlayerProposition)
{
    cout<< "Choisissez une lettre : ";
    cin >> PlayerProposition;
}

//Fonction de boucle de jeu
void GameLoop(int LetterFound,int NumberOfLetter, bool &End, int &NumberError)
{
    //On Demarre le chrono
    using Duree = std::chrono::duration<double>;
    auto DebutDePartie = std::chrono::system_clock::now();

    //On choisit un mot au hasard dans la liste
    std::string ChoosenWord = ChooseAWord(NumberOfLetter);


    //On crée un tableau de int de la même longueur que le mot pour vérifier les lettres trouvées, on initialise toutes la valeurs du tableau à 0
    //(les lettres trouvées sont égale à 1 et les autres à 0)
    //J'aurais aimé utilisé un vecteur à cette endroit pour éviter un warning
    int LetterList[NumberOfLetter];
    for(int i = 0; i < sizeof(LetterList)/sizeof(LetterList[0]); i ++)
    {
        LetterList[i] = 0;
    }

    //Tant que le joueur n'a pas gangé ou perdu on va lui proposer de Soumettre une lettre
    while(End == false)
    {
        cout << ChoosenWord << endl;
        char PlayerProposition;
        PlayerPropositionFunc(PlayerProposition);
        int OldLetterFound = LetterFound;

        //La lettre soumise va être testée :
        // Si elle n'a jamais été trouvé -> elle sera alors débloqué
        //si elle a déjà était trouvé -> alors c'est une erreur
        // Si elle ne fait pas partie du mot -> alors c'est une erreur aussi
        for(int i = 0; i < NumberOfLetter; i++)
        {
            if(PlayerProposition == ChoosenWord[i] && LetterList[i] != 1)
            {
                LetterList[i] = 1;
                LetterFound++;
                cout << " "<<ChoosenWord[i]<< " ";
            }
            else if (LetterList[i] == 1)
            {
                cout << " "<<ChoosenWord[i]<< " ";
            }
            else
            {
                    cout << " -- ";
            }
        }

        //Après avoir checker la lettre on regarde:
        // Si le nombre trouvé avant la soumission et la même qu'après -> donc aucun nouvelle lettre n'a été trouvé -> On dessine alors le Dessin du pendu en fonction du nombre d'erreurs
        //On verifie que le nombre maximale d'erreurs n'a pas été atteinte -> si oui Défaite !
        // On verifie que le nombre de lettre trouvées et égale au nombre de lettre totale du mot -> si oui Victoire !
        if(OldLetterFound == LetterFound)
        {
            cout<<endl;
            cout<<endl;
            cout<<endl;
            NumberError++;
            DessinPendu(NumberError);
        }
        if(NumberError == MAX_NUMBER_ERROR)
        {
            End = true;
            cout << endl;
            cout << "Vous avez perdu ! "<< endl;
        }
        else if(LetterFound == NumberOfLetter)
        {
            End = true;
            cout << endl;
            cout << "Vous avez gagne ! "<< endl;
        }

    }

    //On arrête le chrono et on affiche en combien de temps le joueur à fini la partie
    auto FinDePartie = std::chrono::system_clock::now();
    auto duree = std::chrono::duration_cast<Duree>(FinDePartie - DebutDePartie);
    cout << " Vous avez termine votre partie en :" << duree.count() << "s" << endl;
}

//Fonction pour choisir un mot aléatoirement parmi la liste mot
std::string ChooseAWord(int &NumberOfLetter)
{

    //On initialise un tableau de tout les mots de la liste, avec un index et un string qui va contenir le mot
    auto ChooseWordIndex{0};
    std::string ChoosenWord;
    array<std::string, NOMBRE_MOT> WordList {GestionWord, EntrepriseWord, VoitureWord, ChevalWord, CroquetteWord};

    // On détermine un int au hasard entre 0 et la taille du tableau de mots
    //On attribut ce mot au string préalablement crée
    //On renvoie par référence le nombre de lettre du mot choisi
    ChooseWordIndex = rand() % WordList.size();
    ChoosenWord = WordList[ChooseWordIndex];
    NumberOfLetter = ChoosenWord.length();


    //On affiche "--" à chaque lettre du tableau  et on retourne notre mot choisi
    for(int j = 0; j < ChoosenWord.length(); j++)
    {
            cout<<" -- ";
    }
    return ChoosenWord;
}
