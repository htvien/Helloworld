#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int n = 2;
	int a[3] = { 1,2,3 };
	ofstream fout;
	fout.open("test.bin",ios::binary);
	if (fout.is_open() == false) {
		cout << "Mo file that bai\n";
	}
	fout.write((char*)&n, sizeof(int));
	fout.close();
	ifstream ifs;
	int m;
	ifs.open("test.bin", ios::binary);
		ifs.read((char*)&m, sizeof(int));
		cout << m;
	ifs.close();

	//ofstream file;
	//file.open("test.bin", ios::app|ios::binary);
	//if (file.is_open() == false) {
	//	cout << "Mo file that bai\n";
	//}
	//file.write((char*)a, sizeof(int) * 3);
	//file.close();
	//ifstream fin;
	//int k = 4;
	//int b[4] = {};
	//fin.open("test.bin", ios::binary);
	//	fin.read((char*)b, sizeof(int)*k);
	//	for (int i = 0; i < k; i++) {
	//		cout << b[i];
	//	}
	//fin.close();
	return 0;
}
