#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(0);
Tab G = Tab("fff", "qq","jj");
wind->print();
Tab T = Tab("m", "k","z");
wind->closeTab();
Tab E = Tab("yyy", "l","vvv");
wind->isEmpty();
Tab K = Tab("dd", "kkk","iii");
wind->closeTab();
Tab Y = Tab("ccc", "jjj","aa");
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(2);
Tab A = Tab("ff", "aa","j");
wind->getActiveTab();
Tab W = Tab("q", "r","yy");
wind->print();
wind->closeTab();
Tab P = Tab("nn", "c","g");
wind->getActiveTab();
Tab N = Tab("ww", "pp","h");
wind->getActiveTab();
wind->print();
Tab S = Tab("ooo", "ooo","aa");
wind->closeTab();
Tab Z = Tab("e", "ll","p");
wind->changeActiveTabTo(0);
Tab Q = Tab("nn", "xx","eee");
wind->newTab(A);
wind->getActiveTab();
Tab M = Tab("xx", "ttt","m");
wind->moveActiveTabTo(0);
wind->newTab(E);
Tab V = Tab("tt", "b","l");
wind->print();
wind->moveActiveTabTo(0);
wind->closeTab();
Tab B = Tab("u", "d","jj");
wind->changeActiveTabTo(0);
wind->closeTab();
wind->getActiveTab();
Tab X = Tab("ff", "hh","rrr");
wind->print();
wind->newTab(B);
Tab L = Tab("lll", "ii","eee");
wind->moveActiveTabTo(1);
wind->isEmpty();
Tab J = Tab("www", "oo","xxx");
wind->getActiveTab();
wind->getActiveTab();
Tab C = Tab("ooo", "d","hh");
wind->changeActiveTabTo(4);
Tab O = Tab("y", "g","hh");
wind->print();
wind->moveActiveTabTo(5);
wind->isEmpty();
wind->closeTab();
Tab R = Tab("ccc", "ss","nn");
wind->closeTab();
wind->changeActiveTabTo(3);
wind->closeTab();
wind->changeActiveTabTo(0);
wind->closeTab();
wind->changeActiveTabTo(1);
wind->newTab(C);
wind->closeTab();
wind->moveActiveTabTo(5);
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(1);
wind->newTab(G);
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(4);
wind->isEmpty();
Tab D = Tab("oo", "ff","ww");
wind->isEmpty();
wind->newTab(D);
wind->print();
wind->changeActiveTabTo(2);
wind->changeActiveTabTo(2);
wind->newTab(J);
wind->newTab(K);
Tab I = Tab("ccc", "rr","jj");
wind->newTab(I);
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(0);
wind->newTab(L);
wind->newTab(M);
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->closeTab();
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->print();
Tab U = Tab("hh", "g","ee");
wind->closeTab();
Tab F = Tab("yyy", "kkk","ooo");
wind->newTab(F);
wind->closeTab();
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->print();
wind->print();
wind->isEmpty();
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->newTab(N);
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(5);
Tab H = Tab("tt", "ppp","aaa");
wind->closeTab();
wind->print();
wind->changeActiveTabTo(3);
wind->closeTab();
wind->closeTab();
delete wind;
}
	return 0;
};