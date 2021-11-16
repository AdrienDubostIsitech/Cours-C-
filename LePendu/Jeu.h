#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
#include <string_view>
#include <string>


void DessinPendu(int);
void PlayerPropositionFunc(char &proposition);
void GameLoop(int LetterFound, int NumberOfLetter, bool &End, int &NumberError);
std::string ChooseAWord(int &NumberOfLetter);



#endif // JEU_H_INCLUDED
