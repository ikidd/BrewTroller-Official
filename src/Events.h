#ifndef EVENTS_H
#define EVENTS_H

#warning Fix me! Replace Forward Declarations

void eventHandler(byte eventID, int eventParam);
void triggerSetup();
void eStopISR();
void spargeMaxISR();
void hltMinISR();
void mashMinISR();
void kettleMinISR();

#endif