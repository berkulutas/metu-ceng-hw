#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->print();
Tab L = Tab("k", "ggg","h");
wind->closeTab();
Tab F = Tab("ii", "www","iii");
wind->isEmpty();
Tab I = Tab("zz", "r","fff");
wind->changeActiveTabTo(4);
Tab U = Tab("ee", "uu","o");
wind->getActiveTab();
wind->closeTab();
Tab Y = Tab("vv", "l","o");
wind->getActiveTab();
Tab D = Tab("h", "gg","j");
wind->changeActiveTabTo(5);
Tab S = Tab("ww", "mm","hhh");
wind->isEmpty();
wind->newTab(D);
Tab V = Tab("ppp", "iii","l");
wind->changeActiveTabTo(1);
Tab H = Tab("w", "d","kkk");
wind->closeTab();
Tab W = Tab("o", "sss","ppp");
wind->moveActiveTabTo(0);
Tab P = Tab("hh", "s","h");
wind->changeActiveTabTo(3);
Tab R = Tab("ee", "ddd","y");
wind->isEmpty();
wind->closeTab();
wind->closeTab();
Tab Z = Tab("h", "gg","d");
wind->closeTab();
wind->closeTab();
wind->newTab(F);
wind->newTab(H);
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->newTab(I);
wind->newTab(L);
Tab C = Tab("jjj", "zzz","l");
wind->newTab(C);
wind->getActiveTab();
wind->newTab(P);
Tab A = Tab("ooo", "fff","w");
wind->moveActiveTabTo(2);
Tab N = Tab("x", "j","ccc");
wind->newTab(A);
Tab G = Tab("i", "kk","aaa");
wind->isEmpty();
wind->isEmpty();
Tab J = Tab("ggg", "www","xxx");
wind->isEmpty();
wind->closeTab();
Tab K = Tab("e", "kkk","vv");
wind->isEmpty();
wind->newTab(G);
wind->isEmpty();
wind->isEmpty();
wind->print();
Tab X = Tab("z", "jjj","y");
wind->changeActiveTabTo(5);
wind->closeTab();
wind->moveActiveTabTo(5);
wind->isEmpty();
Tab E = Tab("r", "jjj","ll");
wind->moveActiveTabTo(5);
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(4);
Tab B = Tab("g", "l","m");
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->getActiveTab();
Tab Q = Tab("uu", "b","m");
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(2);
wind->newTab(B);
wind->closeTab();
wind->isEmpty();
Tab O = Tab("ss", "sss","zz");
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(4);
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->print();
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(5);
wind->newTab(E);
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(0);
wind->print();
wind->newTab(J);
wind->getActiveTab();
wind->closeTab();
wind->print();
wind->isEmpty();
wind->print();
wind->closeTab();
wind->print();
wind->newTab(K);
delete wind;
}
	return 0;
};