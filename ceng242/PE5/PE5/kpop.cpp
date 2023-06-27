#include "jazz.h"
#include "kpop.h"
#include "metal.h"
#include "rock.h"


int KPopBand::play(MusicBand *other)
{
    int score = (get_fan_count() + 0.1*get_talent()*get_energy());
    if (dynamic_cast<KPopBand*>(other)) {
        score *= 2.0;
    }
    else if (dynamic_cast<MetalBand*>(other)) {
        score *= 0.5;
    }
    else if (dynamic_cast<RockBand*>(other)) {
        score *= 0.5;
    }
    else if (dynamic_cast<JazzBand*>(other)) {
        score *= 0.5;
    }
    set_energy(get_energy()*(1-0.2));
    return score;
}

void KPopBand::rehearse(void) 
{
    set_energy(get_energy()*(1-0.5*0.2));
    //no talent change
}