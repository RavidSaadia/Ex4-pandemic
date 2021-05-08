//
// Created by ravid on 27/04/2021.
//

#ifndef UNTITLED_BOARD_HPP
#define UNTITLED_BOARD_HPP


#include <ostream>
#include "City.hpp"
#include "Color.hpp"
#include <array>
#include <unordered_map>
#include <unordered_set>

using namespace std;
namespace pandemic {
    class Board {

    private:
        unordered_map<City, Color> _cities_colors;
        unordered_map<City, int> _cities_disease;
        unordered_map<City, unordered_set<City>> _cities_connection;
        unordered_map<City, bool> _research_stations;
        unordered_set<Color> _cure_map;


    public:


        Board();

        int &operator[](City city);

        friend std::ostream &operator<<(std::ostream &os, Board &board);

        bool is_clean();


        unordered_map<City, int> &getCitiesDisease() {
            return _cities_disease;
        }

        bool is_connected(City city1, City city2);

        bool have_Research_Stations(City city);



        void setResearchStations(City city, bool b) {
            _research_stations[city] = b;
        }


        bool there_is_cured(Color color) {
            return _cure_map.contains(color);
        }
        void found_cure(Color color){
            _cure_map.insert(color);
        }


        void setCitiesDisease(City city, int i) {
            _cities_disease[city] = i;
        }
        Color get_city_color(City city) {

            return _cities_colors[city];
        }

        void remove_cures();
    };
}

#endif //UNTITLED_BOARD_HPP
