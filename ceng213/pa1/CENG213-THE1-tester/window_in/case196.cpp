#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->getActiveTab();
Tab N = Tab("lll", "j","yy");
wind->moveActiveTabTo(3);
Tab J = Tab("ggg", "ff","qq");
wind->print();
Tab W = Tab("ii", "mmm","rr");
wind->isEmpty();
Tab B = Tab("ppp", "t","ww");
wind->moveActiveTabTo(5);
wind->newTab(B);
Tab E = Tab("oo", "xx","xxx");
wind->moveActiveTabTo(5);
Tab H = Tab("q", "fff","ff");
wind->changeActiveTabTo(4);
wind->print();
Tab G = Tab("w", "b","o");
wind->moveActiveTabTo(4);
wind->closeTab();
Tab X = Tab("l", "bb","p");
wind->print();
Tab D = Tab("mm", "ii","l");
wind->closeTab();
Tab F = Tab("vvv", "s","s");
wind->newTab(D);
Tab T = Tab("eee", "bb","u");
wind->moveActiveTabTo(4);
Tab M = Tab("z", "ss","rr");
wind->getActiveTab();
wind->changeActiveTabTo(5);
Tab O = Tab("q", "ww","nn");
wind->isEmpty();
wind->isEmpty();
Tab Y = Tab("ll", "l","c");
wind->closeTab();
wind->isEmpty();
Tab Q = Tab("zz", "zzz","g");
wind->isEmpty();
Tab U = Tab("h", "c","nnn");
wind->changeActiveTabTo(2);
Tab R = Tab("w", "t","mm");
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(5);
Tab A = Tab("ff", "ww","r");
wind->newTab(A);
wind->moveActiveTabTo(0);
wind->newTab(E);
Tab S = Tab("oo", "iii","l");
wind->isEmpty();
wind->closeTab();
wind->isEmpty();
wind->closeTab();
wind->newTab(F);
Tab I = Tab("qqq", "fff","cc");
wind->moveActiveTabTo(3);
wind->closeTab();
wind->newTab(G);
wind->print();
wind->changeActiveTabTo(4);
Tab Z = Tab("j", "uu","ff");
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->newTab(H);
Tab K = Tab("t", "eee","g");
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->print();
Tab C = Tab("ccc", "b","lll");
wind->print();
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->changeActiveTabTo(4);
wind->closeTab();
wind->closeTab();
wind->isEmpty();
Tab P = Tab("dd", "ss","hh");
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->newTab(C);
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->moveActiveTabTo(3);
wind->newTab(I);
Tab V = Tab("aaa", "ww","ggg");
wind->newTab(J);
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(3);
Tab L = Tab("k", "u","kkk");
wind->moveActiveTabTo(3);
wind->closeTab();
wind->print();
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(5);
wind->newTab(K);
wind->changeActiveTabTo(3);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(5);
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->newTab(L);
wind->print();
wind->changeActiveTabTo(0);
wind->newTab(M);
wind->closeTab();
wind->newTab(N);
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(3);
wind->closeTab();
wind->print();
wind->isEmpty();
wind->getActiveTab();
delete wind;
}
	return 0;
};