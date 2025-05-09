#include <iostream>

auto main() -> int
{
    int size;
    std::cout << "Bitte geben Sie eine Zahl ein: ";
    std::cin >> size; // Liest einen int-Wert vom Benutzer ein
    std::cout << "Sie haben die Zahl " << size << " eingegeben." << std::endl;
    int *array = new int[size]; // Dynamisch Speicher für ein Array anfordern
    
    if (array == nullptr)
    {
        std::cout << "Memory not allocated." << std::endl;
        exit(0);
    }
    for (int i = 0; i < size; ++i)
    {
        array[i] = i + 1; // Array mit Werten füllen
    }
    std::cout << "Array-Inhalt: ";
    for (int i = 0; i < size; ++i)
    {
        std::cout << array[i] << " "; // Array-Werte ausgeben
    }
    std::cout << std::endl;
    delete[] array; // Dynamisch reservierten Speicher freigeben
    return 0;
}