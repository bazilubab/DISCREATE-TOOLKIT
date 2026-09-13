#include <iostream>
using namespace std;

class Set {
protected:
    int a1, a2, b1, b2; 
public:
    Set() {
        a1 = a2 = b1 = b2 = 0;
    }

    void inputSets() {
        cout << "Enter 2 elements for Set A:\n";
        cin >> a1 >> a2;
        cout << "Enter 2 elements for Set B:\n";
        cin >> b1 >> b2;
    }

    void displaySets() {
        cout << "Set A = {" << a1 << ", " << a2 << "}\n";
        cout << "Set B = {" << b1 << ", " << b2 << "}\n";
    }

    void unionSet() {
        cout << "----UNION OF SETS----" << endl;
        cout << "A ? B = {" << a1 << ", " << a2;
        if (b1 != a1 && b1 != a2) cout << ", " << b1;
        if (b2 != a1 && b2 != a2 && b2 != b1) cout << ", " << b2;
        cout << "}\n";
    }

    void intersectionSet() {
        cout << "\n--- Intersection of Sets ---\n";
        cout << "A n B = {";

        if (a1 == b1 || a1 == b2) {
            cout << a1;
            if (a2 == b1 || a2 == b2) cout << ", ";
        }
        if (a2 == b1 || a2 == b2) {
            cout << a2;
        }

        cout << "}\n";
    }

    void differenceSet() {
        cout << "\n--- Difference (A - B) ---\n";
        cout << "A - B = {";

        if (a1 != b1 && a1 != b2) {
            cout << a1;
            if (a2 != b1 && a2 != b2) cout << ", ";
        }
        if (a2 != b1 && a2 != b2) {
            cout << a2;
        }

        cout << "}\n";
    }

    void cartesianProduct() {
        cout << "-------CARTESIAN PRODUCT-------" << endl;
        cout << "(" << a1 << "," << b1 << "), ";
        cout << "(" << a1 << "," << b2 << "), ";
        cout << "(" << a2 << "," << b1 << "), ";
        cout << "(" << a2 << "," << b2 << ")\n";
    }

    void isSubset() {
    
        if ((a1 == b1 || a1 == b2) && (a2 == b1 || a2 == b2)) {
            cout << "Set A is a subset of Set B\n";
        } else if ((b1 == a1 || b1 == a2) && (b2 == a1 || b2 == a2)) {
            cout << "Set B is a subset of Set A\n";
        } else {
            cout << "Neither set is a subset of the other\n";
        }
    }

    void isEqualSet() {
    
        if ((a1 == b1 && a2 == b2) || (a1 == b2 && a2 == b1)) {
            cout << "Set A is equal to Set B\n";
        } else {
            cout << "Set A is NOT equal to Set B\n";
        }
    }

    void complementA() {
        cout << "Complement of A (Universal Set {1,2,3,4}) = {";

        if (a1 != 1 && a2 != 1) {
            cout << "1";
            if ((a1 != 2 && a2 != 2) || (a1 != 3 && a2 != 3) || (a1 != 4 && a2 != 4))
                cout << ", ";
        }

        if (a1 != 2 && a2 != 2) {
            cout << "2";
            if ((a1 != 3 && a2 != 3) || (a1 != 4 && a2 != 4))
                cout << ", ";
        }
        

        if (a1 != 3 && a2 != 3) {
            cout << "3";
            if (a1 != 4 && a2 != 4)
                cout << ", ";
        }

        if (a1 != 4 && a2 != 4) {
            cout << "4";
        }

        cout << "}\n";
    }

    void complementB() {
        cout << "Complement of B (Universal Set {1,2,3,4}) = {";

        if (b1 != 1 && b2 != 1) {
            cout << "1";
            if ((b1 != 2 && b2 != 2) || (b1 != 3 && b2 != 3) || (b1 != 4 && b2 != 4))
                cout << ", ";
        }

        if (b1 != 2 && b2 != 2) {
            cout << "2";
            if ((b1 != 3 && b2 != 3) || (b1 != 4 && b2 != 4))
                cout << ", ";
        }

        if (b1 != 3 && b2 != 3) {
            cout << "3";
            if (b1 != 4 && b2 != 4)
                cout << ", ";
        }

        if (b1 != 4 && b2 != 4) {
            cout << "4";
        }

        cout << "}\n";
    }
};


class Relation : public Set {
private:
    int r1x, r1y, r2x, r2y;
public:
	
	void inputSets() {
        cout << "Enter 2 elements for Set A:\n";
        cin >> a1 >> a2;
    }
    
    void inputRelation() {
        cout << "Enter 2 ordered pairs (x y):\n";
        cin >> r1x >> r1y;
        cin >> r2x >> r2y;
    }
    
    void displaySets() {
    cout << "Set A = {" << a1 << ", " << a2 << "}\n";
}
    
    
    void displayRelation() {
        cout << "R = {(" << r1x << "," << r1y << "), (" << r2x << "," << r2y << ")}\n";
    }


    void checkReflexive() {
    if (((r1x == a1 && r1y == a1) || (r2x == a1 && r2y == a1)) &&
        ((r1x == a2 && r1y == a2) || (r2x == a2 && r2y == a2))) {
        cout << "Relation is Reflexive\n";
    } else {
        cout << "Relation is NOT Reflexive\n";
    }
}



void checkSymmetric() {
        if (r1x == r2y && r1y == r2x)
            cout << "Relation is Symmetric\n";
        else
            cout << "Relation is NOT Symmetric\n";
    }
    
    
void checkAntisymmetric() {
        if (r1x == r2y && r1y == r2x && r1x != r1y)
            cout << "Relation is NOT Antisymmetric\n";
        else
            cout << "Relation is Antisymmetric\n";
    }
	
void isFunction() {
        if (r1x == r2x && r1y != r2y)
            cout << "Relation is NOT a function\n";
        else
            cout << "Relation IS a function\n";
    }

    void inverseRelation() {
        cout << "Inverse of R = {(" << r1y << "," << r1x << "), (" 
             << r2y << "," << r2x << ")}\n";
    }
    
    void domainRange() {
        cout << "Domain = {";
        if (r1x == r2x) cout << r1x;
        else cout << r1x << ", " << r2x;
        cout << "}, Range = {";
        if (r1y == r2y) cout << r1y;
        else cout << r1y << ", " << r2y;
        cout << "}\n";
    }
 
};
    
    
int main() {
    Set s;
    Relation r;

    int mainChoice = 0;

    while (mainChoice != 3) {
        cout << "\n--- Main Menu ---\n";
        cout << "1. Sets\n";
        cout << "2. Relations\n";
        cout << "3. Exit\n";
        cout << "Your choice: ";
        cin >> mainChoice;

        if (mainChoice == 1) {
            s.inputSets();
            s.displaySets();

            int setChoice = 0;
            while (setChoice != 9) {
                cout << "\nSet Operations:\n";
                cout << "1. Union\n";
                cout << "2. Intersection\n";
                cout << "3. Difference\n";
                cout << "4. Cartesian Product\n";
                cout << "5. Subset\n";
                cout << "6. Equality\n";
                cout << "7. Complement A\n";
                cout << "8. Complement B\n";
                cout << "9. Back\n";
                cout << "Choice: ";
                cin >> setChoice;

                if (setChoice == 1) s.unionSet();
                else if (setChoice == 2) s.intersectionSet();
                else if (setChoice == 3) s.differenceSet();
                else if (setChoice == 4) s.cartesianProduct();
                else if (setChoice == 5) s.isSubset();
                else if (setChoice == 6) s.isEqualSet();
                else if (setChoice == 7) s.complementA();
                else if (setChoice == 8) s.complementB();
                else if (setChoice == 9) cout << "Back to main menu.\n";
                else cout << "Invalid choice.\n";
            }

        } else if (mainChoice == 2) {
            r.inputSets();
            r.inputRelation();
            r.displaySets();
            r.displayRelation();

            int relChoice = 0;
            while (relChoice != 7) {
                cout << "\nRelation Operations:\n";
                cout << "1. Reflexive\n";
                cout << "2. Symmetric\n";
                cout << "3. Antisymmetric\n";
                cout << "4. Function\n";
                cout << "5. Inverse\n";
                cout << "6. Domain & Range\n";
                cout << "7. Back\n";
                cout << "Choice: ";
                cin >> relChoice;

                if (relChoice == 1) r.checkReflexive();
                else if (relChoice == 2) r.checkSymmetric();
                else if (relChoice == 3) r.checkAntisymmetric();
                else if (relChoice == 4) r.isFunction();
                else if (relChoice == 5) r.inverseRelation();
                else if (relChoice == 6) r.domainRange();
                else if (relChoice == 7) cout << "Back to main menu.\n";
                else cout << "Invalid choice.\n";
            }

        } else if (mainChoice == 3) {
            cout << "Goodbye!\n";
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}
