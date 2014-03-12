#include <iostream>
#include <fstream>
#include <string>

#include "pugixml.hpp"

int main(int argc, const char* argv[]){
    for(size_t i = 1; i < argc; ++i){
        std::string source(argv[i]);

        auto pos = source.find(".xml");

        if(pos != std::string::npos){
            std::string target = source;
            target.replace(pos, 4, ".dat");

            std::cout << "Source " << source << std::endl;
            std::cout << "Target " << target << std::endl;

            pugi::xml_document doc;
            auto result = doc.load_file(source.c_str());

            if(result){
                std::cout << "XML [" << source << "] parsed without errors" << std::endl;

                auto image = doc.child("sudokuImage").child("image");

                std::ofstream stream(target);

                auto camera = image.child("camera");
                stream << camera.attribute("brand").value() << " " << camera.attribute("model").value() << std::endl;

                auto spec = image.child("imageSpecifications");
                stream
                    << spec.attribute("sizex").value() << "x" << spec.attribute("sizey").value() << ":" << spec.attribute("bitsPP").value()
                    << " " << spec.attribute("encoding").value() << std::endl;

                char grid[9][9];

                auto sudoku = doc.child("sudokuImage").child("sudoku");

                for(auto row = sudoku.child("row"); row; row = row.next_sibling("row")){
                    for(auto col = row.child("col"); col; col = col.next_sibling("col")){
                        auto row_id = row.attribute("rowId").as_int() - 1;
                        auto col_id = col.attribute("colId").as_int() - 1;

                        grid[row_id][col_id] = col.attribute("cellValue").value()[0];
                    }
                }

                for(size_t i = 0; i < 9; ++i){
                    for(size_t j = 0; j < 9; ++j){
                        stream << grid[i][j] << " ";
                    }
                    stream << std::endl;
                }
            } else {
                std::cout << "XML [" << source << "] parsed with errors" << std::endl;
                std::cout << "Error description: " << result.description() << std::endl;
                std::cout << "Error offset: " << result.offset << std::endl;
            }
        }
    }
}