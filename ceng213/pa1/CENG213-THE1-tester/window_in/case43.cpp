#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->getActiveTab();
Tab R = Tab("o", "h","ppp");
wind->print();
Tab U = Tab("l", "u","i");
wind->newTab(R);
Tab H = Tab("h", "t","m");
wind->moveActiveTabTo(4);
Tab V = Tab("ee", "q","qqq");
wind->changeActiveTabTo(3);
Tab I = Tab("uu", "u","j");
wind->closeTab();
wind->getActiveTab();
Tab W = Tab("qq", "w","ggg");
wind->moveActiveTabTo(2);
Tab L = Tab("e", "ddd","kk");
wind->getActiveTab();
wind->closeTab();
Tab S = Tab("hhh", "p","z");
wind->moveActiveTabTo(2);
Tab F = Tab("sss", "mmm","ppp");
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(1);
Tab D = Tab("aaa", "j","ww");
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(0);
wind->print();
wind->isEmpty();
wind->newTab(D);
wind->getActiveTab();
Tab C = Tab("pp", "tt","d");
wind->getActiveTab();
Tab G = Tab("nn", "p","bbb");
wind->changeActiveTabTo(2);
wind->newTab(C);
Tab N = Tab("t", "ggg","ii");
wind->changeActiveTabTo(5);
wind->print();
Tab K = Tab("iii", "aaa","e");
wind->newTab(F);
Tab O = Tab("ii", "bb","zzz");
wind->closeTab();
Tab A = Tab("rr", "ppp","h");
wind->getActiveTab();
Tab B = Tab("z", "qq","yy");
wind->changeActiveTabTo(4);
Tab J = Tab("cc", "aaa","ppp");
wind->print();
Tab X = Tab("gg", "ll","ddd");
wind->changeActiveTabTo(0);
Tab Q = Tab("kkk", "oo","yyy");
wind->print();
wind->getActiveTab();
wind->isEmpty();
Tab T = Tab("kk", "hhh","v");
wind->print();
wind->changeActiveTabTo(5);
wind->print();
wind->closeTab();
wind->getActiveTab();
Tab M = Tab("cc", "kkk","xx");
wind->changeActiveTabTo(1);
Tab Y = Tab("a", "ggg","kk");
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->closeTab();
Tab P = Tab("hhh", "yyy","vv");
wind->isEmpty();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->newTab(A);
wind->changeActiveTabTo(0);
wind->newTab(B);
wind->closeTab();
wind->closeTab();
wind->newTab(G);
Tab E = Tab("aa", "uuu","lll");
wind->getActiveTab();
wind->getActiveTab();
wind->changeActiveTabTo(2);
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(2);
wind->isEmpty();
wind->newTab(E);
wind->isEmpty();
wind->isEmpty();
wind->changeActiveTabTo(4);
wind->newTab(H);
wind->newTab(I);
wind->print();
Tab Z = Tab("eee", "hhh","g");
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(1);
wind->isEmpty();
wind->moveActiveTabTo(5);
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->getActiveTab();
wind->isEmpty();
wind->changeActiveTabTo(2);
wind->newTab(J);
wind->newTab(K);
wind->print();
wind->changeActiveTabTo(5);
wind->print();
wind->isEmpty();
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(5);
wind->print();
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(0);
wind->print();
wind->newTab(L);
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->newTab(M);
wind->print();
delete wind;
}
	return 0;
};