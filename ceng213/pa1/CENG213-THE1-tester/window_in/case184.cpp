#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->changeActiveTabTo(4);
Tab R = Tab("n", "nnn","uuu");
wind->print();
Tab N = Tab("e", "x","j");
wind->isEmpty();
Tab Q = Tab("ff", "n","e");
wind->moveActiveTabTo(5);
Tab X = Tab("ddd", "rr","ggg");
wind->print();
Tab C = Tab("oo", "vvv","uuu");
wind->newTab(C);
Tab K = Tab("g", "www","eee");
wind->print();
Tab D = Tab("g", "q","m");
wind->newTab(D);
Tab T = Tab("zzz", "ww","e");
wind->print();
wind->changeActiveTabTo(1);
Tab I = Tab("hhh", "ww","mm");
wind->print();
wind->moveActiveTabTo(1);
wind->newTab(I);
wind->moveActiveTabTo(5);
Tab Y = Tab("www", "m","qqq");
wind->print();
wind->print();
Tab H = Tab("s", "rrr","ii");
wind->moveActiveTabTo(1);
Tab F = Tab("iii", "ddd","b");
wind->getActiveTab();
wind->changeActiveTabTo(2);
Tab S = Tab("nn", "uuu","zzz");
wind->print();
wind->closeTab();
wind->newTab(F);
Tab E = Tab("p", "vvv","yy");
wind->newTab(E);
Tab M = Tab("zz", "aa","ee");
wind->moveActiveTabTo(2);
wind->newTab(H);
Tab P = Tab("l", "i","ggg");
wind->changeActiveTabTo(3);
Tab W = Tab("ppp", "hh","ii");
wind->closeTab();
Tab J = Tab("ttt", "lll","ll");
wind->print();
Tab V = Tab("xxx", "nn","rrr");
wind->changeActiveTabTo(5);
wind->getActiveTab();
wind->newTab(J);
wind->isEmpty();
wind->print();
wind->print();
wind->closeTab();
wind->print();
wind->getActiveTab();
wind->newTab(K);
wind->getActiveTab();
wind->newTab(M);
wind->changeActiveTabTo(1);
Tab A = Tab("p", "c","a");
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->changeActiveTabTo(3);
wind->newTab(A);
wind->print();
wind->newTab(N);
Tab Z = Tab("kkk", "p","kk");
wind->print();
wind->isEmpty();
wind->getActiveTab();
Tab L = Tab("lll", "yyy","vv");
wind->newTab(L);
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(5);
wind->print();
wind->moveActiveTabTo(3);
wind->closeTab();
wind->closeTab();
Tab O = Tab("nn", "sss","aa");
wind->print();
wind->moveActiveTabTo(1);
wind->getActiveTab();
wind->moveActiveTabTo(1);
Tab G = Tab("i", "a","y");
wind->getActiveTab();
wind->isEmpty();
wind->newTab(G);
wind->print();
wind->newTab(O);
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->newTab(P);
wind->isEmpty();
wind->closeTab();
wind->newTab(Q);
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(1);
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(2);
wind->closeTab();
Tab U = Tab("eee", "r","ff");
wind->closeTab();
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(1);
wind->getActiveTab();
wind->print();
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->closeTab();
delete wind;
}
	return 0;
};