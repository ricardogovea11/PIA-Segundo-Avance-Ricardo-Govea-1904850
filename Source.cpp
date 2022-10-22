#include <iostream>
#include <string>

using namespace std;

struct {
	int id, anio;
	char nombre[250], genero[250], clasificacion[5];
}juego[100];

int contador = 0, opMenu, opBuscar, num, srtAnio;
char srtNombre[250], srtGenero[250], srtClasif[5];
bool menu = true, encontrar = false;

void agregar();
void buscar();

void main() {

	system("color 0A");
	cout << "BIENVENIDO..." << endl;

	while (menu == true) {

		cout << "\n=======MENU=======\n";
		cout << "1. Lista de juegos\n";
		cout << "2. Buscar juego\n";
		cout << "3. Agregar juego\n";
		cout << "4. Salir\n";
		cout << "Selecciona una opcion...\t";
		cin >> opMenu;

		switch (opMenu) {

		case 1:

			for (int i = 0; i < 100; i++) {

				cout << juego[i].id << endl;
			}

			break;

		case 2:

			buscar();
			break;

		case 3:

			agregar();
			break;

		case 4:

			system("cls");
			menu = false;
			cout << "ESTAS SALIENDO... HASTA LUEGO" << endl;
			break;

		default:

			system("cls");
			cout << "ERROR... OPCION NO VALIDA..." << endl;
			break;
		}
	}
}

void agregar() {

	system("cls");
	cout << "Cuantos juegos deseas agregar?...\t";
	cin >> num;

	for (int i = contador; i < num; i++, contador++) {

		cin.ignore();
		juego[contador].id = contador + 1;
		cout << "Agrega nombre: ";
		cin.getline(juego[contador].nombre, 250, '\n');
		cout << "Agrega genero: ";
		cin.getline(juego[contador].genero, 250, '\n');
		cout << "Agrega clasificacion: ";
		cin.getline(juego[contador].clasificacion, 5, '\n');
		cout << "Agrega anio: ";
		cin >> juego[contador].anio;
	}
}

void buscar() {

	system("cls");
	cout << "=======BUSQUEDA=======\n";
	cout << "1. Nombre\n";
	cout << "2. Genero\n";
	cout << "3. Clasificacion\n";
	cout << "4. Anio\n";
	cout << "Selecciona una opcion...\t";
	cin >> opBuscar;

	switch (opBuscar) {

	case 1:

		system("cls");
		cout << "Ingresa el nombre: ";
		cin >> srtNombre;

		for (int i = 0; i < 100; i++) {

			if (juego[i].nombre == srtNombre) {

				cout << juego[i].nombre << endl;
				encontrar = true;
			}
		}

		break;

		if (encontrar == false) {

			system("cls");
			cout << "NO SE ENCONTRO EL JUEGO..." << endl;
		}

		break;

	case 2:

		system("cls");
		cout << "Ingresa el genero: ";
		cin >> srtGenero;

		for (int i = 0; i < 100; i++) {

			if (juego[i].genero == srtGenero) {

				cout << juego[i].nombre << endl;
				encontrar = true;
			}
		}

		break;

		if (encontrar == false) {

			system("cls");
			cout << "NO SE ENCONTRO EL JUEGO..." << endl;
		}

		break;

	case 3:

		system("cls");
		cout << "Ingresa la clasificacion: ";
		cin >> srtClasif;

		for (int i = 0; i < 100; i++) {

			if (juego[i].nombre == srtClasif) {

				cout << juego[i].nombre << endl;
				encontrar = true;
			}
		}

		break;

		if (encontrar == false) {

			system("cls");
			cout << "NO SE ENCONTRO EL JUEGO..." << endl;
		}

		break;

	case 4:

		system("cls");
		cout << "Ingresa el anio: ";
		cin >> srtAnio;

		for (int i = 0; i < 100; i++) {

			if (juego[i].anio == srtAnio) {

				cout << juego[i].nombre << endl;
				encontrar = true;
			}
		}

		break;

		if (encontrar == false) {

			system("cls");
			cout << "NO SE ENCONTRO EL JUEGO..." << endl;
		}

		break;

	default:

		system("cls");
		cout << "ERROR... OPCION NO VALIDA..." << endl;
		break;
	}
}