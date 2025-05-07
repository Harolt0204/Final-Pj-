#include "gestor.h"

void MovieManager::addMovie(const Movie& m) {
    collection.push_back(m);
    std::cout << "Movie added successfully.\n";
}

void MovieManager::showAllMovies() const {
    if (collection.empty()) {
        std::cout << "No movies in your collection.\n";
        return;
    }
    for (const auto& m : collection) {
        std::cout << "Title: " << m.title << "\n";
        std::cout << "Director: " << m.director << "\n";
        std::cout << "Year: " << m.year << "\n";
        std::cout << "Genre: " << m.genre << "\n";
        std::cout << "Status: " << m.status << "\n";
        std::cout << "-----------------------\n";
    }
}

void MovieManager::searchMovieByTitle(const std::string& searchTitle) const {
    auto it = std::find_if(collection.begin(), collection.end(),
        [&searchTitle](const Movie& m) {
            return m.title == searchTitle;
        });

    if (it != collection.end()) {
        std::cout << "Movie found:\n";
        std::cout << "Title: " << it->title << "\n";
        std::cout << "Director: " << it->director << "\n";
        std::cout << "Year: " << it->year << "\n";
        std::cout << "Genre: " << it->genre << "\n";
        std::cout << "Status: " << it->status << "\n";
    } else {
        std::cout << "Movie not found.\n";
    }
}
