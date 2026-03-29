#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 3) {
        cout << "Usage: program_name source_file destination_file" << endl;
        return 1;
    }

    ifstream source(argv[1]);
    ofstream dest(argv[2], ios::app); 

    if (!source || !dest) {
        cout << "Error opening files!" << endl;
        return 1;
    }

    char ch;
    while (source.get(ch)) {
        dest.put(ch);
    }

    cout << "Files concatenated successfully." << endl;
    source.close();
    dest.close();
    return 0;
}
