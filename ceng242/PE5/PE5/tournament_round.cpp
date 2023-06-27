#include "tournament_round.h"

// TournamentRound functions goes here

TournamentRound::TournamentRound() { }
TournamentRound::TournamentRound(std::list<MusicBand*>_bands) : bands(_bands) { }
TournamentRound::TournamentRound(std::vector<MusicBand*>_bands) : bands(_bands.begin(), _bands.end()) { }

std::size_t TournamentRound::size() { return bands.size(); }

//TournamentRound::TournamentRound(TournamentRound& other) : bands(other.bands) {}

//TournamentRound::TournamentRound(TournamentRound&& other) : bands(std::move(other.bands)) {}
    
TournamentRound& TournamentRound::operator=(TournamentRound&& other) {
    if (this != &other) {
        bands = std::move(other.bands);
    }
    return *this; 
}

TournamentRound& TournamentRound::get_next_round() {
    std::list<MusicBand*> nextBands;

    while (bands.size() > 1) {
        MusicBand* band1 = bands.front();; bands.pop_front();
        MusicBand* band2 = bands.back(); bands.pop_back();

        int result1 = band1->play(band2);
        int result2 = band2->play(band1);

        if (result1 >= result2) {
            int fan_change = min((result1-result2), band2->get_fan_count());
            band1->set_fan_count(band1->get_fan_count() + fan_change);
            band2->set_fan_count(band2->get_fan_count() - fan_change);
            nextBands.push_back(band1);
        }
        else {
            int fan_change = min((result2-result1), band1->get_fan_count());
            band1->set_fan_count(band1->get_fan_count() - fan_change);
            band2->set_fan_count(band2->get_fan_count() + fan_change);
            nextBands.push_back(band2);
        }

    }

    if (bands.size() == 1) {
        nextBands.push_back(bands.front());
    }

    // bands.assign(nextBands.begin(), nextBands.end());
    bands = nextBands; 
    return *this;
}

std::ostream& operator<< (std::ostream &os, TournamentRound &other) {
    auto it = other.bands.begin();
    if (it != other.bands.end()) {
        os << (*it)->get_name();
        ++it;
    }

    while (it != other.bands.end()) {
        os << '\t' << (*it)->get_name();
        ++it;
    }

    return os;
}
