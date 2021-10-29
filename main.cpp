#include <iostream>
#include <iomanip>
using namespace std;

void printValue(float newIncome, float readjustment, int percent) {
  cout << fixed << setprecision(2);
  cout << "New income " << newIncome << endl;
  cout << "Readjustment " << readjustment << endl;
  cout << "Percent " << percent << " %" << endl;
}

int main() {
    float value;
    cin >> value;

    if (value >= 0 && value <= 400.00) {
        printValue(value * 1.15, value * 0.15, 15);

    } else if (value >= 400.01 && value <= 800.00) {
        printValue(value * 1.12, value * 0.12, 12);
    } else if (value >= 800.01 && value <= 1200.00) {
        printValue(value * 1.10, value * 0.10, 10);
    } else if (value >= 1200.01 && value <= 2200.00) {
        printValue(value * 1.07, value * 0.07, 7);
    } else if (value > 2000.00) {
        printValue(value * 1.04, value * 0.04, 4);
    }

	return 0;
} 















// - - - - - - //

// int main() {

//   bool verdadeiro = 12 < 13 || 10 <= 9;
//   cout << "verdadeiro = " << verdadeiro << endl;
//   int myAge = 20;
//   int mySisterAgo = 33;

//   if (myAge <= mySisterAgo) { 
//     cout << "I am younger" << endl;
//   }

// 	return 0;
//}


// - - - - - - - - //

// #include <iostream>
// using namespace std;

// //Faça um programa que leia 5 valores int, e mostre quais são pares

// int main() {

//   int myAge = 20;
//   int mySisterAgo = 33;

//   if (myAge <= mySisterAgo) { 
//     cout << "I am younger" << endl;
//   int a, b, c, d, e;
//   int qtd = 0;

//   cin >> a >> b >> c >> d >> e;

//   if (a % 2 == 0) {
//     qtd++;
//   }
//   if (b % 2 == 0) {
//     qtd++;
//   }
//   if (c % 2 == 0) {
//     qtd++;
//   }

//   if (d % 2 == 0) {
//     qtd++;
//   }
//   if (e % 2 == 0) {
//     qtd++;
//   }

//   cout << qtd << " valor(s) pares" << endl;

// 	return 0;
// } 


// - - - - - - //


// #include <iostream>
// using namespace std;

// //Faça um programa que leia 5 valores int, e mostre quais são pares
// //Faça um programa que mostre pares entre 1...100

// int main() {

//   int a, b, c, d, e;
//   int qtd = 0;

//   cin >> a >> b >> c >> d >> e;

//   if (a % 2 == 0) {
//     qtd++;
//   }
//   if (b % 2 == 0) {
//     qtd++;
//   }
//   if (c % 2 == 0) {
//     qtd++;
//   }
//   if (d % 2 == 0) {
//     qtd++;
//   }
//   if (e % 2 == 0) {
//     qtd++;

//   for (int i = 1; i <= 100; i++) {
//     if (i % 2 == 0) {
//       cout << i << endl;
//     }
//   }

//   cout << qtd << " valor(s) pares" << endl;

// 	return 0;
// }  


// - - - - - //


// int main() {

//   for (int i = 1; i <= 100; i++) {
//     if (i % 2 == 0) {
//   for (int i = 2; i <= 100; i+=2) {   
//       cout << i << endl;
//     }
//   }

// 	return 0;
// }  



// - - - -  //

// int main() {

//   for (int i = 2; i <= 100; i+=2) {   
//       cout << i << endl;
//     }

//   int i = 2;

//   while ( i <= 100) {
//     cout << i << endl;
//     i += 2;
//   }

// 	return 0;
// }  