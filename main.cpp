



#include <fstream>
#include <filesystem>
#include <vector>

int main(){
    namespace fs = std::filesystem;
    auto cur = fs::current_path();

    std::vector<std::string> dirs = {"a_dir","b_dir","c_dir","d_dir"};
    std::vector<std::string> files = {"info.txt","info1.txt"};
    for (const std::string& i: dirs){
        auto new_dir = cur /i;
        fs::create_directory(new_dir);
        for(const std::string & f: files){
            std::ofstream file(new_dir / f);
            file << f;
        }
    }
    

    return 0;
}