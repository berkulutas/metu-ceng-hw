#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(2);
Tab T = Tab("m", "hh","ff");
wind->getActiveTab();
Tab Z = Tab("h", "zzz","tt");
wind->moveActiveTabTo(5);
Tab D = Tab("uuu", "zzz","ii");
wind->newTab(D);
Tab W = Tab("tt", "uuu","q");
wind->getActiveTab();
Tab X = Tab("www", "ggg","y");
wind->print();
Tab H = Tab("h", "p","f");
wind->closeTab();
Tab V = Tab("ww", "ee","m");
wind->isEmpty();
Tab I = Tab("ii", "j","aaa");
wind->isEmpty();
Tab R = Tab("aa", "x","mm");
wind->moveActiveTabTo(2);
Tab M = Tab("i", "v","l");
wind->isEmpty();
Tab Y = Tab("t", "vv","l");
wind->getActiveTab();
wind->moveActiveTabTo(0);
Tab J = Tab("c", "g","yyy");
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->isEmpty();
Tab O = Tab("y", "ooo","f");
wind->print();
wind->closeTab();
wind->changeActiveTabTo(5);
Tab F = Tab("s", "qq","rr");
wind->isEmpty();
wind->moveActiveTabTo(5);
Tab S = Tab("k", "ddd","aaa");
wind->print();
wind->closeTab();
wind->print();
Tab A = Tab("ii", "uu","v");
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->print();
Tab B = Tab("zzz", "o","nn");
wind->newTab(A);
Tab U = Tab("z", "ooo","hh");
wind->print();
wind->newTab(B);
wind->newTab(F);
wind->isEmpty();
wind->isEmpty();
Tab K = Tab("ee", "oo","fff");
wind->newTab(H);
wind->getActiveTab();
wind->newTab(I);
Tab L = Tab("nn", "iii","r");
wind->moveActiveTabTo(0);
Tab C = Tab("nnn", "yyy","tt");
wind->newTab(C);
wind->closeTab();
wind->newTab(J);
wind->getActiveTab();
wind->newTab(K);
wind->moveActiveTabTo(5);
wind->isEmpty();
Tab N = Tab("ggg", "kkk","yyy");
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->closeTab();
Tab E = Tab("kkk", "ww","ss");
wind->print();
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(0);
wind->newTab(E);
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->newTab(L);
Tab G = Tab("hhh", "pp","f");
wind->newTab(G);
wind->print();
wind->newTab(M);
wind->closeTab();
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->newTab(N);
wind->changeActiveTabTo(3);
wind->closeTab();
Tab P = Tab("rr", "ggg","k");
wind->newTab(O);
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(0);
wind->closeTab();
wind->print();
wind->changeActiveTabTo(3);
wind->closeTab();
wind->isEmpty();
wind->closeTab();
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->newTab(P);
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(0);
delete wind;
}
	return 0;
};