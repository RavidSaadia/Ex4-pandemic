//
// Created by ravid on 03/05/2021.
//
#pragma ones
#ifndef UNTITLED_INIT_BOARD_H
#define UNTITLED_INIT_BOARD_H

#endif //UNTITLED_INIT_BOARD_H
namespace pandemic {


    void init_colors(unordered_map<City, Color> &map) {

        map = {
                {City::Algiers,       Color::Black},
                {City::Atlanta,       Color::Blue},
                {City::Baghdad,       Color::Black},
                {City::Bangkok,       Color::Red},
                {City::Beijing,       Color::Red},
                {City::Bogota,        Color::Yellow},
                {City::BuenosAires,   Color::Yellow},
                {City::Cairo,         Color::Black},
                {City::Chennai,       Color::Black},
                {City::Chicago,       Color::Blue},
                {City::Delhi,         Color::Black},
                {City::Essen,         Color::Blue},
                {City::HoChiMinhCity, Color::Red},
                {City::HongKong,      Color::Red},
                {City::Istanbul,      Color::Black},
                {City::Jakarta,       Color::Red},
                {City::Johannesburg,  Color::Yellow},
                {City::Karachi,       Color::Black},
                {City::Khartoum,      Color::Yellow},
                {City::Kinshasa,      Color::Yellow},
                {City::Kolkata,       Color::Black},
                {City::Lagos,         Color::Yellow},
                {City::Lima,          Color::Yellow},
                {City::London,        Color::Blue},
                {City::LosAngeles,    Color::Yellow},
                {City::Madrid,        Color::Blue},
                {City::Manila,        Color::Red},
                {City::MexicoCity,    Color::Yellow},
                {City::Miami,         Color::Yellow},
                {City::Milan,         Color::Blue},
                {City::Montreal,      Color::Blue},
                {City::Moscow,        Color::Black},
                {City::Mumbai,        Color::Black},
                {City::NewYork,       Color::Blue},
                {City::Osaka,         Color::Red},
                {City::Paris,         Color::Blue},
                {City::Riyadh,        Color::Black},
                {City::SanFrancisco,  Color::Blue},
                {City::Santiago,      Color::Yellow},
                {City::SaoPaulo,      Color::Yellow},
                {City::Seoul,         Color::Red},
                {City::Shanghai,      Color::Red},
                {City::StPetersburg,  Color::Blue},
                {City::Sydney,        Color::Red},
                {City::Taipei,        Color::Red},
                {City::Tehran,        Color::Black},
                {City::Tokyo,         Color::Red},
                {City::Washington,    Color::Blue},

        };

    }

    void init_cities_disease(unordered_map<City, int> &map) {

        map = {
                {City::Algiers,       0},
                {City::Atlanta,       0},
                {City::Baghdad,       0},
                {City::Bangkok,       0},
                {City::Beijing,       0},
                {City::Bogota,        0},
                {City::BuenosAires,   0},
                {City::Cairo,         0},
                {City::Chennai,       0},
                {City::Chicago,       0},
                {City::Delhi,         0},
                {City::Essen,         0},
                {City::HoChiMinhCity, 0},
                {City::HongKong,      0},
                {City::Istanbul,      0},
                {City::Jakarta,       0},
                {City::Johannesburg,  0},
                {City::Karachi,       0},
                {City::Khartoum,      0},
                {City::Kinshasa,      0},
                {City::Kolkata,       0},
                {City::Lagos,         0},
                {City::Lima,          0},
                {City::London,        0},
                {City::LosAngeles,    0},
                {City::Madrid,        0},
                {City::Manila,        0},
                {City::MexicoCity,    0},
                {City::Miami,         0},
                {City::Milan,         0},
                {City::Montreal,      0},
                {City::Moscow,        0},
                {City::Mumbai,        0},
                {City::NewYork,       0},
                {City::Osaka,         0},
                {City::Paris,         0},
                {City::Riyadh,        0},
                {City::SanFrancisco,  0},
                {City::Santiago,      0},
                {City::SaoPaulo,      0},
                {City::Seoul,         0},
                {City::Shanghai,      0},
                {City::StPetersburg,  0},
                {City::Sydney,        0},
                {City::Taipei,        0},
                {City::Tehran,        0},
                {City::Tokyo,         0},
                {City::Washington,    0},

        };

    }


    void init_cities_connection(unordered_map<City, unordered_set<City>> &map) {

        map = {
                {City::Algiers,       {City::Madrid,       City::Paris,        City::Istanbul,      City::Cairo,}},
                {City::Atlanta,       {City::Madrid,       City::Paris,        City::Istanbul,      City::Cairo}},
                {City::Baghdad,       {City::Chicago,      City::Miami,        City::Washington}},
                {City::Bangkok,       {City::Tehran,       City::Istanbul,     City::Cairo,         City::Riyadh,        City::Karachi}},
                {City::Beijing,       {City::Kolkata,      City::Chennai,      City::Jakarta,       City::HoChiMinhCity, City::HongKong}},
                {City::Bogota,        {City::Shanghai,     City::Seoul}},
                {City::BuenosAires,   {City::MexicoCity,   City::Lima,         City::Miami,         City::SaoPaulo,      City::BuenosAires}},
                {City::Cairo,         {City::Bogota,       City::SaoPaulo}},
                {City::Chennai,       {City::Algiers,      City::Istanbul,     City::Baghdad,       City::Khartoum,      City::Riyadh}},
                {City::Chicago,       {City::Mumbai,       City::Delhi,        City::Kolkata,       City::Bangkok,       City::Jakarta}},
                {City::Delhi,         {City::SanFrancisco, City::LosAngeles,   City::MexicoCity,    City::Atlanta,       City::Montreal}},
                {City::Essen,         {City::Tehran,       City::Karachi,      City::Mumbai,        City::Chennai,       City::Kolkata}},
                {City::HoChiMinhCity, {City::London,       City::Paris,        City::Milan,         City::StPetersburg}},
                {City::HongKong,      {City::Jakarta,      City::Bangkok,      City::HongKong,      City::Manila}},
                {City::Istanbul,      {City::Bangkok,      City::Kolkata,      City::HoChiMinhCity, City::Shanghai,      City::Manila,  City::Taipei}},
                {City::Jakarta,       {City::Milan,        City::Algiers,      City::StPetersburg,  City::Cairo,         City::Baghdad, City::Moscow}},
                {City::Johannesburg,  {City::Chennai,      City::Bangkok,      City::HoChiMinhCity, City::Sydney}},
                {City::Karachi,       {City::Kinshasa,     City::Khartoum}},
                {City::Khartoum,      {City::Tehran,       City::Baghdad,      City::Riyadh,        City::Mumbai,        City::Delhi}},
                {City::Kinshasa,      {City::Cairo,        City::Lagos,        City::Kinshasa,      City::Johannesburg}},
                {City::Kolkata,       {City::Lagos,        City::Khartoum,     City::Johannesburg}},
                {City::Lagos,         {City::Delhi,        City::Chennai,      City::Bangkok,       City::HongKong}},
                {City::Lima,          {City::SaoPaulo,     City::Khartoum,     City::Kinshasa}},
                {City::London,        {City::MexicoCity,   City::Bogota,       City::Santiago}},
                {City::LosAngeles,    {City::NewYork,      City::Madrid,       City::Essen,         City::Paris}},
                {City::Madrid,        {City::SanFrancisco, City::Chicago,      City::MexicoCity,    City::Sydney}},
                {City::Manila,        {City::London,       City::NewYork,      City::Paris,         City::SaoPaulo,      City::Algiers}},
                {City::MexicoCity,    {City::Taipei,       City::SanFrancisco, City::HoChiMinhCity, City::Sydney}},
                {City::Miami,         {City::LosAngeles,   City::Chicago,      City::Miami,         City::Lima,          City::Bogota}},
                {City::Milan,         {City::Atlanta,      City::MexicoCity,   City::Washington,    City::Bogota}},
                {City::Montreal,      {City::Essen,        City::Paris,        City::Istanbul}},
                {City::Moscow,        {City::Chicago,      City::Washington,   City::NewYork}},
                {City::Mumbai,        {City::StPetersburg, City::Istanbul,     City::Tehran}},
                {City::NewYork,       {City::Karachi,      City::Delhi,        City::Chennai}},
                {City::Osaka,         {City::Montreal,     City::Washington,   City::London,        City::Madrid}},
                {City::Paris,         {City::Taipei,       City::Tokyo}},
                {City::Riyadh,        {City::Algiers,      City::Essen,        City::Madrid,        City::Milan,         City::London}},
                {City::SanFrancisco,  {City::Baghdad,      City::Cairo,        City::Karachi}},
                {City::Santiago,      {City::LosAngeles,   City::Chicago,      City::Tokyo,         City::Manila}},
                {City::SaoPaulo,      {City::Lima}},
                {City::Seoul,         {City::Bogota,       City::BuenosAires,  City::Lagos,         City::Madrid}},
                {City::Shanghai,      {City::Beijing,      City::Shanghai,     City::Tokyo}},
                {City::StPetersburg,  {City::Beijing,      City::HongKong,     City::Taipei,        City::Seoul,         City::Tokyo}},
                {City::Sydney,        {City::Essen,        City::Istanbul,     City::Moscow}},
                {City::Taipei,        {City::Jakarta,      City::Manila,       City::LosAngeles}},
                {City::Tehran,        {City::Shanghai,     City::HongKong,     City::Osaka,         City::Manila}},
                {City::Tokyo,         {City::Baghdad,      City::Moscow,       City::Karachi,       City::Delhi}},
                {City::Washington,    {City::Seoul,        City::Shanghai,     City::Osaka,         City::SanFrancisco}}

        };

    }
}
//unordered_map<City, int> _cities_disease;
//unordered_map<City, unordered_set<City>> _cities_connection;
//unordered_map<City, bool> _research_stations;
//unordered_set<Color> _cure_map;
