#ifndef FUNCTIONS
#define FUNCTIONS

#include<string>
#include<vector>
#include<experimental/filesystem>

void showFiles(std::string);
void changeFileChosen(bool);
void moveAroundFiles(std::string);
void goToPath();
void goToTheTop();
void goToTheBottom();
void goToTheMiddle();
void createNewTab();
void closeTab();
void moveAroundTabs(std::string);
void searchBar();
void renameFile();
void deleteFile();
void copyFile();
void pasteFile();
void moveFile();
void makeDir();
void createFile();
void selectFiles();
void cancelSelectFiles();
void clearRangeSelect();
void compressFile();
void decompressFile();
void help();

#endif
