#ifndef GESTOR_H
#define GESTOR_H

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

struct Movie {
    std::string title;
    std::string director;
    int year;
    std::string genre;
    std::string status;
};

class MovieManager {
private:
    std::vector<Movie> collection;
public:
    void addMovie(const Movie& m);
    void showAllMovies() const;
    void searchMovieByTitle(const std::string& searchTitle) const;
};

#endif
