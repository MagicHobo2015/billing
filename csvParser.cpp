/*************************************************************
 *      Author:     Joshua Land                             **
 * ---------------------------------------------------------**
 *      Contact:    Joshua.Land6@gmail.com                  **
 * ---------------------------------------------------------**
 *      Description:    this library wil parse my specific  **
 *      csv file and turn it into a custom object that i did**
 *      not make yet.                                       **
 * ***********************************************************/

#include "csvParser.h"
#include <fstream>
#include <string>
// this constructor just sets the file name
csvParser::csvParser(const std::string fileName) {
    this->fileName = fileName;
}

    // *** SETTERS ****

// set the file name.
void csvParser::setFileName(const std::string name) { this->fileName = name; }

// set line
void csvParser::setLine(const std::string newLine) { this->line = newLine; }

// set col
void csvParser::setCol(const std::string newCol) { this->col = newCol; }

    // **** GETTERS *****
// returns the fileName
std::string csvParser::getFileName() const { return this->fileName; }

// returns the current line
std::string csvParser::getLine() const { return this->line; }

// returns the current col
std::string csvParser::getCol() const { return this->col; }

// returns a pointer to the current row
std::vector<std::string> * csvParser::getRow()  { return &row; }

// returns a pointer to a largish vector of vectors called content
std::vector< std::vector< std::string >>* csvParser::getContent() {return &content;}