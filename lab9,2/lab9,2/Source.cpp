#include <iostream>
#include <thread>

void progression(int n) {

    double y = 1.0;

    for (int i = 1; i <= n; i++) {
        y *= (2.0 * i) / (2.0 * i - 1) * (4.0 * i) / (2.0 * i + 1);
    }

    std::cout << "Result y = " << y << std::endl;
}

void analyze_sample(int sample_id, int i, double reagent_v) {

    double Density_i = i * 5.0;

    double AnalysisTime_i = Density_i / reagent_v;

    std::cout << "Sample " << sample_id << " analyzed. Time = " << AnalysisTime_i << " sec" << std::endl;
}

int main() {

    int choice;

    std::cout << "1 - Progression calculation\n";
    std::cout << "2 - Biological sample analysis\n";
    std::cout << "Choose task: ";

    std::cin >> choice;

    switch (choice) {

    case 1: {

        int n;

        std::cout << "Enter n: ";
        std::cin >> n;

        std::thread t1(progression, n);

        t1.join();

        break;
    }

    case 2: {

        const int V = 9;

        double Reagent_V = 10.0 - (V / 3.0);

        std::thread t1(analyze_sample, 1, 1, Reagent_V);
        std::thread t2(analyze_sample, 2, 2, Reagent_V);
        std::thread t3(analyze_sample, 3, 3, Reagent_V);
        std::thread t4(analyze_sample, 4, 4, Reagent_V);
        std::thread t5(analyze_sample, 5, 5, Reagent_V);

        t1.join();
        t2.join();
        t3.join();
        t4.join();
        t5.join();

        break;
    }

    default:
        std::cout << "Wrong choice!" << std::endl;
    }

    return 0;
}