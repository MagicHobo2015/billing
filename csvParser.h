/*************************************************************
 *      Author:     Joshua Land                             **
 * ---------------------------------------------------------**
 *      Contact:    Joshua.Land6@gmail.com                  **
 * ---------------------------------------------------------**
 * ***********************************************************/
// Header guard
#ifndef BILLING_CSVPARSER_H
#define BILLING_CSVPARSER_H

// libraries used
#include <string>
#include <vector>
#include <fstream>

class csvParser {
    // start with the private stuff
private:
    std::ifstream file;
    std::string line, col, fileName;
    std::vector< std::vector< std::string >> content;
    std::vector<std::string> row;

    // now the  public
public:
    // constructor does nothing
    csvParser() = default;
    // constructor initializes file
    csvParser(const std::string fileName);
    // Start with setters
    void setFileName(const std::string name);
    void setLine(const std::string newLine);
    void setCol(const std::string newCol);
    // Now some Getters
    std::string getFileName() const;
    std::string getLine() const;
    std::string getCol() const;
    std::vector<std::string>* getRow();
    // ******************** TODO: make custom type to return instead ****************************
    std::vector< std::vector< std::string >>* getContent();
    bool init();
};


#endif //BILLING_CSVPARSER_H

/*
 *
vector<Users>* function()
{
  vector<Users>* pointer = new vector<Users>;
  return pointer;
}
 *
 * */