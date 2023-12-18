// Assume a class cricketer is declared. Declare a derived class batsman from
// cricketer. Data member of batsman. Total runs, Average runs and best
// performance. Member functions input data, calculate average runs, Display
// data. (Single Inheritance)


#include <iostream>
#include <string>

using namespace std;

class Cricketer {
protected:
    string p_name;
    int match_played;
public:
    void get_player_info() {
        cout << "Enter player name: ";
        cin >> p_name;
        cout << "Enter matches played: ";
        cin >> match_played;
    }
};

class Batsman : public Cricketer {
private:
    int total_runs;
    double avg_runs;
    int best_performed;
public:
    void get_bestman_data() {
        get_player_info();  
        cout << "Enter total runs: ";
        cin >> total_runs;
        cout << "Enter best performance: ";
        cin >> best_performed;
        cal_avg_runs();  
    }

    void cal_avg_runs() {
        if (match_played != 0) {
            avg_runs = (float)(total_runs) / match_played;
        } else {
            avg_runs = 0;
        }
    }

    void display_data() {
        cout << "Player Name: " << p_name << endl;
        cout << "Matches Played: " << match_played << endl;
        cout << "Total Runs: " << total_runs << endl;
        cout << "Average Runs: " << avg_runs << endl;
        cout << "Best Performance: " << best_performed << endl;
    }
};

int main() {
    Batsman batsman1;

    cout << "Enter Batsman's Information:" << endl;
    batsman1.get_bestman_data();

    cout << "\nBatsman's Data:" << endl;
    batsman1.display_data();

    return 0;
}
