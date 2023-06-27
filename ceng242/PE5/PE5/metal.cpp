#include "jazz.h"
#include "kpop.h"
#include "metal.h"
#include "rock.h"



int MetalBand::play(MusicBand *other)
{
    int score = (get_fan_count() + 0.1*get_talent()*get_energy());
    if (dynamic_cast<KPopBand*>(other)) {
        score *= 0.5;
    }
    else if (dynamic_cast<MetalBand*>(other)) {
        score *= 1.0;
    }
    else if (dynamic_cast<RockBand*>(other)) {
        score *= 1.5;
    }
    else if (dynamic_cast<JazzBand*>(other)) {
        score *= 1.1;
    }
    set_energy(get_energy()*(1-0.16));
    return score;
}

void MetalBand::rehearse(void) 
{
    set_energy(get_energy()*(1-0.5*0.16));
    set_talent(get_talent()-5);
}