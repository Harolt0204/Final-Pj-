#include "gestor.h"

void showMenu() {
    std::cout << "\n=== Personal Movie Manager ===\n";
    std::cout << "1. Add a movie\n";
    std::cout << "2. Show all movies\n";
    std::cout << "3. Search movie by title\n";
    std::cout << "0. Exit\n";
    std::cout << "Choose an option: ";
}

int main() {
    MovieManager manager;
    int option;

    do {
        showMenu();
        std::cin >> option;
        std::cin.ignore();

        if (option == 1) {
            Movie m;
            std::cout << "Enter title: ";
            std::getline(std::cin, m.title);
            std::cout << "Enter director: ";
            std::getline(std::cin, m.director);
            std::cout << "Enter year: ";
            std::cin >> m.year;
            std::cin.ignore();
            std::cout << "Enter genre: ";
            std::getline(std::cin, m.genre);
            std::cout << "Enter status: ";
            std::getline(std::cin, m.status);

            manager.addMovie(m);
        } else if (option == 2) {
            manager.showAllMovies();
        } else if (option == 3) {
            std::string searchTitle;
            std::cout << "Enter title to search: ";
            std::getline(std::cin, searchTitle);
            manager.searchMovieByTitle(searchTitle);
        }

    } while (option != 0);

    std::cout << "Goodbye!\n";
    return 0;
}
