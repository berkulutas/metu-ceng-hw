#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->getActiveTab();
Tab O = Tab("ccc", "n","ss");
wind->moveActiveTabTo(3);
Tab D = Tab("ddd", "x","w");
wind->newTab(D);
Tab V = Tab("o", "r","oo");
wind->getActiveTab();
Tab N = Tab("a", "yy","uu");
wind->closeTab();
Tab P = Tab("fff", "hh","yy");
wind->getActiveTab();
Tab B = Tab("zz", "dd","o");
wind->newTab(B);
Tab Q = Tab("ff", "jjj","ll");
wind->print();
Tab A = Tab("ii", "fff","jjj");
wind->isEmpty();
Tab U = Tab("ddd", "aa","ll");
wind->newTab(A);
wind->moveActiveTabTo(0);
Tab Z = Tab("ttt", "ff","tt");
wind->isEmpty();
wind->changeActiveTabTo(3);
Tab L = Tab("ggg", "cc","e");
wind->newTab(L);
Tab E = Tab("ss", "p","bbb");
wind->isEmpty();
Tab J = Tab("zz", "ggg","bb");
wind->closeTab();
Tab G = Tab("y", "vvv","vv");
wind->newTab(E);
wind->newTab(G);
Tab K = Tab("rr", "o","ggg");
wind->moveActiveTabTo(1);
wind->closeTab();
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(4);
wind->getActiveTab();
Tab X = Tab("zzz", "jj","cc");
wind->getActiveTab();
Tab F = Tab("www", "q","aa");
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(2);
Tab M = Tab("vvv", "b","nn");
wind->closeTab();
wind->getActiveTab();
wind->newTab(F);
Tab S = Tab("ll", "p","b");
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(4);
Tab W = Tab("o", "t","l");
wind->changeActiveTabTo(1);
Tab T = Tab("ppp", "ee","lll");
wind->print();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(3);
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->print();
wind->closeTab();
wind->changeActiveTabTo(1);
wind->newTab(J);
Tab C = Tab("z", "rr","zz");
wind->isEmpty();
wind->newTab(C);
wind->getActiveTab();
wind->changeActiveTabTo(4);
wind->newTab(K);
wind->changeActiveTabTo(3);
wind->newTab(M);
Tab H = Tab("y", "ggg","aa");
wind->closeTab();
wind->newTab(H);
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(5);
Tab I = Tab("hh", "pp","ggg");
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->moveActiveTabTo(4);
Tab Y = Tab("fff", "mm","ggg");
wind->closeTab();
wind->isEmpty();
wind->isEmpty();
wind->changeActiveTabTo(3);
Tab R = Tab("e", "iii","ii");
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->closeTab();
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->print();
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->moveActiveTabTo(2);
wind->print();
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->isEmpty();
wind->isEmpty();
wind->newTab(I);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->print();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->isEmpty();
wind->print();
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(3);
wind->print();
wind->moveActiveTabTo(0);
wind->print();
delete wind;
}
	return 0;
};