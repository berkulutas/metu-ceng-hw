#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(3);
Tab G = Tab("iii", "rr","i");
wind->getActiveTab();
Tab D = Tab("e", "mmm","uu");
wind->getActiveTab();
Tab P = Tab("c", "fff","b");
wind->moveActiveTabTo(5);
Tab A = Tab("i", "www","xx");
wind->moveActiveTabTo(3);
Tab Y = Tab("g", "a","rrr");
wind->closeTab();
Tab Q = Tab("eee", "lll","b");
wind->isEmpty();
Tab X = Tab("q", "aa","gg");
wind->getActiveTab();
Tab J = Tab("vv", "t","nn");
wind->moveActiveTabTo(0);
wind->closeTab();
Tab W = Tab("uu", "ii","m");
wind->newTab(A);
wind->changeActiveTabTo(4);
Tab E = Tab("qqq", "kkk","b");
wind->isEmpty();
wind->closeTab();
Tab C = Tab("aa", "ff","tt");
wind->print();
Tab T = Tab("k", "e","zzz");
wind->newTab(C);
Tab B = Tab("ddd", "a","ff");
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->print();
wind->newTab(B);
Tab U = Tab("tt", "rrr","q");
wind->isEmpty();
Tab S = Tab("nn", "s","q");
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->getActiveTab();
Tab I = Tab("ff", "pp","rrr");
wind->changeActiveTabTo(3);
wind->closeTab();
wind->print();
Tab O = Tab("w", "nnn","ss");
wind->newTab(D);
Tab M = Tab("yy", "e","nn");
wind->print();
Tab L = Tab("d", "r","eee");
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->print();
Tab N = Tab("ff", "jjj","o");
wind->closeTab();
Tab R = Tab("w", "rr","uu");
wind->closeTab();
wind->closeTab();
wind->newTab(E);
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(0);
Tab F = Tab("mmm", "xx","kkk");
wind->print();
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(4);
wind->print();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(5);
Tab Z = Tab("l", "mmm","z");
wind->newTab(F);
wind->print();
wind->closeTab();
wind->closeTab();
wind->closeTab();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(3);
wind->closeTab();
wind->print();
Tab V = Tab("ss", "yy","r");
wind->newTab(G);
wind->print();
wind->newTab(I);
wind->moveActiveTabTo(2);
wind->print();
wind->newTab(J);
wind->newTab(L);
Tab H = Tab("m", "oo","rrr");
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(2);
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->newTab(H);
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->closeTab();
wind->print();
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(5);
wind->closeTab();
wind->isEmpty();
Tab K = Tab("o", "u","ii");
wind->newTab(K);
wind->print();
wind->isEmpty();
wind->newTab(M);
wind->print();
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->newTab(N);
delete wind;
}
	return 0;
};