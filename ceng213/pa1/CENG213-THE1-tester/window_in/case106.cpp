#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->isEmpty();
Tab E = Tab("iii", "eee","mm");
wind->getActiveTab();
Tab C = Tab("r", "x","ee");
wind->print();
Tab D = Tab("nnn", "e","rr");
wind->newTab(C);
Tab B = Tab("qq", "hh","sss");
wind->closeTab();
Tab S = Tab("ii", "pp","f");
wind->newTab(B);
Tab G = Tab("f", "bb","ss");
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(1);
Tab X = Tab("h", "e","n");
wind->newTab(D);
Tab Z = Tab("hhh", "yyy","c");
wind->getActiveTab();
Tab K = Tab("f", "tt","kkk");
wind->moveActiveTabTo(3);
Tab W = Tab("s", "nn","kkk");
wind->isEmpty();
Tab Y = Tab("j", "w","cc");
wind->closeTab();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
Tab A = Tab("u", "qqq","ee");
wind->newTab(A);
wind->isEmpty();
Tab T = Tab("sss", "pp","lll");
wind->getActiveTab();
Tab P = Tab("jjj", "gg","ddd");
wind->changeActiveTabTo(5);
wind->isEmpty();
Tab M = Tab("uu", "k","bb");
wind->isEmpty();
Tab O = Tab("yy", "oo","rrr");
wind->closeTab();
wind->isEmpty();
Tab U = Tab("xx", "zzz","lll");
wind->moveActiveTabTo(1);
wind->closeTab();
wind->changeActiveTabTo(1);
wind->print();
wind->moveActiveTabTo(1);
wind->isEmpty();
Tab R = Tab("www", "uuu","rrr");
wind->getActiveTab();
wind->print();
Tab F = Tab("rrr", "x","ttt");
wind->newTab(E);
wind->print();
wind->print();
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(3);
Tab L = Tab("xxx", "k","ggg");
wind->newTab(F);
wind->newTab(G);
Tab Q = Tab("zzz", "bb","uu");
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(1);
wind->closeTab();
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->print();
wind->print();
wind->moveActiveTabTo(1);
Tab J = Tab("ll", "pp","yy");
wind->newTab(J);
wind->newTab(K);
wind->print();
Tab H = Tab("ccc", "o","ddd");
wind->closeTab();
Tab N = Tab("ddd", "gg","o");
wind->getActiveTab();
wind->print();
wind->newTab(H);
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->newTab(L);
Tab V = Tab("pp", "r","oo");
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(1);
wind->closeTab();
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->closeTab();
wind->newTab(M);
wind->print();
wind->closeTab();
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->newTab(N);
wind->newTab(O);
wind->isEmpty();
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->print();
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(0);
wind->print();
wind->newTab(P);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(4);
delete wind;
}
	return 0;
};