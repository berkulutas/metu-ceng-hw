#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->getActiveTab();
Tab G = Tab("c", "n","ll");
wind->changeActiveTabTo(4);
Tab K = Tab("ttt", "d","nnn");
wind->moveActiveTabTo(4);
Tab L = Tab("vvv", "a","w");
wind->isEmpty();
Tab W = Tab("v", "zzz","jjj");
wind->newTab(G);
Tab M = Tab("jjj", "nn","jjj");
wind->closeTab();
Tab Q = Tab("rr", "sss","rrr");
wind->closeTab();
Tab A = Tab("lll", "mmm","ddd");
wind->print();
wind->changeActiveTabTo(3);
Tab V = Tab("zzz", "yy","hh");
wind->isEmpty();
Tab E = Tab("lll", "p","kk");
wind->print();
Tab B = Tab("v", "ii","t");
wind->print();
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(1);
wind->newTab(A);
Tab J = Tab("ss", "ii","ooo");
wind->isEmpty();
Tab P = Tab("y", "v","rrr");
wind->closeTab();
Tab R = Tab("q", "vvv","www");
wind->newTab(B);
Tab Z = Tab("t", "j","a");
wind->isEmpty();
Tab X = Tab("l", "qq","xxx");
wind->print();
wind->closeTab();
wind->getActiveTab();
wind->newTab(E);
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(4);
Tab C = Tab("lll", "kk","vvv");
wind->getActiveTab();
wind->isEmpty();
Tab T = Tab("i", "vvv","ll");
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
Tab S = Tab("mm", "m","nnn");
wind->closeTab();
wind->closeTab();
Tab D = Tab("eee", "lll","s");
wind->changeActiveTabTo(2);
wind->newTab(C);
Tab I = Tab("bbb", "eee","o");
wind->changeActiveTabTo(3);
Tab H = Tab("aaa", "dd","xx");
wind->print();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->newTab(D);
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->print();
wind->getActiveTab();
wind->newTab(H);
wind->changeActiveTabTo(3);
wind->print();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->moveActiveTabTo(2);
Tab N = Tab("mm", "x","y");
wind->changeActiveTabTo(3);
Tab F = Tab("nn", "kkk","ccc");
wind->changeActiveTabTo(3);
wind->print();
Tab Y = Tab("ttt", "k","f");
wind->getActiveTab();
wind->changeActiveTabTo(4);
Tab O = Tab("i", "ppp","t");
wind->newTab(F);
wind->changeActiveTabTo(2);
wind->closeTab();
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->newTab(I);
wind->newTab(J);
wind->print();
wind->getActiveTab();
Tab U = Tab("ii", "ii","mm");
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->getActiveTab();
wind->newTab(K);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(1);
wind->closeTab();
wind->moveActiveTabTo(0);
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->print();
wind->changeActiveTabTo(1);
wind->closeTab();
wind->newTab(L);
wind->moveActiveTabTo(0);
wind->print();
wind->newTab(M);
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->closeTab();
wind->newTab(N);
wind->closeTab();
wind->moveActiveTabTo(1);
delete wind;
}
	return 0;
};