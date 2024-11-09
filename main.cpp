#include <iostream>
using namespace std;

int main() {
    float budget;
    int slc;
    int propPrice = 0, mtbpPrice = 0, mempPrice = 0, gcpPrice = 0, strpPrice = 0, csgpPrice = 0;

    cout << "Welcome to PC Builder System" << endl;
    cout << "Please Enter your budget (in USD $)" << endl;
    cin >> budget;

    do {
        cout << "Choose your desired category (use digits i.e: 1-6, 0 to finish)" << endl;
        cout << "1. Processor (CPU)" << endl << "2. Motherboard " << endl << "3. Memory (RAM)" << endl
            << "4. Graphics Card (GPU)" << endl << "5. Storage" << endl << "6. Casing (CPU)" << endl;
        cin >> slc;

        if (slc == 0) {
            cout << "Exiting PC Builder System..." << endl;
            break; 
        }

        switch (slc) {
        case 1:
            cout << "Select any processor type" << endl;
            cout << "1. AMD Ryzen 3 3100 (cheap) $100" << endl;
            cout << "2. Intel Core i5-11600K (mid) $250" << endl;
            cout << "3. Intel Core i9-12900K (Expensive) $650" << endl;
            int prop;
            cin >> prop;
            if (prop == 1) {
                cout << "Selected item: AMD Ryzen 3 3100" << endl;
                propPrice = 100;
            }
            else if (prop == 2) {
                cout << "Selected item: Intel Core i5-11600K" << endl;
                propPrice = 250;
            }
            else if (prop == 3) {
                cout << "Selected item: Intel Core i9-12900K" << endl;
                propPrice = 650;
            }
            else {
                cout << "Invalid Selection" << endl;
            }
            break;

        case 2:
            cout << "Select any Motherboard type" << endl;
            cout << "1. MSI B450 TOMAHAWK MAX (cheap) $110" << endl;
            cout << "2. MSI MPG Z590 GAMING PLUS (mid) $270" << endl;
            cout << "3. ASUS ROG CROSSHAIR VIII HERO (Wi-Fi) (Expensive) $550" << endl;
            int mtbp;
            cin >> mtbp;
            if (mtbp == 1) {
                cout << "Selected item: MSI B450 TOMAHAWK MAX" << endl;
                mtbpPrice = 110;
            }
            else if (mtbp == 2) {
                cout << "Selected item: MSI MPG Z590 GAMING PLUS" << endl;
                mtbpPrice = 270;
            }
            else if (mtbp == 3) {
                cout << "Selected item: ASUS ROG CROSSHAIR VIII HERO (Wi-Fi)" << endl;
                mtbpPrice = 550;
            }
            else {
                cout << "Invalid Selection" << endl;
            }
            break;

        case 3:
            cout << "Select any Memory type" << endl;
            cout << "1. Corsair Vengeance LPX 8GB DDR4 3200MHz (cheap) $55" << endl;
            cout << "2. G.Skill Trident Z RGB 32GB (2 x 16GB) DDR4 3600MHz (mid) $200" << endl;
            cout << "3. Corsair Dominator Platinum RGB 32GB (4 x 8GB) DDR4 4000MHz (Expensive) $450" << endl;
            int memp;
            cin >> memp;
            if (memp == 1) {
                cout << "Selected item: Corsair Vengeance LPX 8GB DDR4 3200MHz" << endl;
                mempPrice = 55;
            }
            else if (memp == 2) {
                cout << "Selected item: G.Skill Trident Z RGB 32GB (2 x 16GB) DDR4 3600MHz" << endl;
                mempPrice = 200;
            }
            else if (memp == 3) {
                cout << "Selected item: Corsair Dominator Platinum RGB 32GB (4 x 8GB) DDR4 4000MHz" << endl;
                mempPrice = 450;
            }
            else {
                cout << "Invalid Selection" << endl;
            }
            break;

        case 4:
            cout << "Select any Graphics Card type" << endl;
            cout << "1. AMD Radeon RX 5500 XT (cheap) $220" << endl;
            cout << "2. NVIDIA GeForce RTX 3060 (mid) $400" << endl;
            cout << "3. AMD Radeon RX 6900 XT (Expensive) $1000" << endl;
            int gcp;
            cin >> gcp;
            if (gcp == 1) {
                cout << "Selected item: AMD Radeon RX 5500 XT" << endl;
                gcpPrice = 220;
            }
            else if (gcp == 2) {
                cout << "Selected item: NVIDIA GeForce RTX 3060" << endl;
                gcpPrice = 400;
            }
            else if (gcp == 3) {
                cout << "Selected item: AMD Radeon RX 6900 XT" << endl;
                gcpPrice = 1000;
            }
            else {
                cout << "Invalid Selection" << endl;
            }
            break;

        case 5:
            cout << "Select any Storage type" << endl;
            cout << "1. Seagate BarraCuda 1TB HDD (cheap) $45" << endl;
            cout << "2. Samsung 970 EVO Plus 1TB NVMe SSD (mid) $150" << endl;
            cout << "3. Samsung 980 PRO 2TB NVMe SSD (Expensive) $400" << endl;
            int strp;
            cin >> strp;
            if (strp == 1) {
                cout << "Selected item: Seagate BarraCuda 1TB HDD" << endl;
                strpPrice = 45;
            }
            else if (strp == 2) {
                cout << "Selected item: Samsung 970 EVO Plus 1TB NVMe SSD" << endl;
                strpPrice = 150;
            }
            else if (strp == 3) {
                cout << "Selected item: Samsung 980 PRO 2TB NVMe SSD" << endl;
                strpPrice = 400;
            }
            else {
                cout << "Invalid Selection" << endl;
            }
            break;

        case 6:
            cout << "Select any Casing type" << endl;
            cout << "1. NZXT H510 (cheap) $70" << endl;
            cout << "2. Fractal Design Meshify C (mid) $95" << endl;
            cout << "3. Corsair Obsidian 500D RGB SE (Expensive) $250" << endl;
            int csgp;
            cin >> csgp;
            if (csgp == 1) {
                cout << "Selected item: NZXT H510" << endl;
                csgpPrice = 70;
            }
            else if (csgp == 2) {
                cout << "Selected item: Fractal Design Meshify C" << endl;
                csgpPrice = 95;
            }
            else if (csgp == 3) {
                cout << "Selected item: Corsair Obsidian 500D RGB SE" << endl;
                csgpPrice = 250;
            }
            else {
                cout << "Invalid Selection" << endl;
            }
            break;

        default:
            cout << "Invalid choice. Please choose a number from 0 to 6." << endl;
            break;
        }

    } while (slc != 0);

    int totalCost = propPrice + mtbpPrice + mempPrice + gcpPrice + strpPrice + csgpPrice;
    cout << "The total cost is: $" << totalCost << endl;

    if (budget >= totalCost) {
        cout << "You are within your budget.....!" << endl;
    }
    else {
        cout << "Items have exceeded your budget." << endl;
    }

    return 0;
}
