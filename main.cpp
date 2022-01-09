/*************************************************************
 *      Author:     Joshua Land                             **
 * ---------------------------------------------------------**
 *      Contact:    Joshua.Land6@gmail.com                  **
 * ---------------------------------------------------------**
 * ***********************************************************/
#include <string>
#include <fstream>
#include <iostream>
#include <vector>
#include <sstream>

void loadAnimation();
// start pushing after ,,,,,,,,,,,,,,
int main() {
    std::vector<std::string> row;
    std::vector<std::vector<std::string>> content;
    std::string line, col;
    std::string fileName = "permFile.csv";
    std::ifstream file(fileName );

    if (file.is_open()) {
        // for debugging
        std::cout << "File is open" << std::endl;


        // get each line
        while (std::getline(file, line)) {
            // clear the row or else you push the same vector just bigger over and over
            row.clear();
            if (line == ",,,,,,,,,,,,,,") {std::cout << line << std::endl;}



            // here line is one line so make it a stream
            std::stringstream str(line);

            // go through the stream and break at ","
            while (std::getline(str, col, ',')) {
                if (col.empty()) {
                    continue;
                } else {
                    loadAnimation();
                    row.push_back(col);
                }

            }
            content.push_back(row);
        }
        std::cout << "end of file reached" << std::endl;
    } else {
        // if you're here there was a problem loading the file.
        std::cout << "Error Loading File" << std::endl;
    }
    // for debugging
    std::cout << "Content Size: \t" << content.size() << std::endl;
    // here an array called content is full of data
    // so loop over it and get rid of anything that doesnt have a date
    for (auto & i : content) {
        std::cout << i.size() << std::endl;
    }


    // clean up
    file.close();
    return 0;
}

void loadAnimation() {
    char arr[] = "|/\\|/\\|";

    for (auto i : arr) {
        std::cout << i << "\r";
    }
}
