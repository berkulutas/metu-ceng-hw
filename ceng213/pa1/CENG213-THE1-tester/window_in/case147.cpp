#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(1);
Tab W = Tab("kk", "y","s");
wind->isEmpty();
Tab R = Tab("n", "zzz","qq");
wind->moveActiveTabTo(1);
Tab V = Tab("tt", "kkk","zz");
wind->isEmpty();
Tab E = Tab("uuu", "ee","ff");
wind->isEmpty();
Tab J = Tab("lll", "ss","rrr");
wind->isEmpty();
wind->isEmpty();
Tab A = Tab("j", "y","o");
wind->changeActiveTabTo(4);
Tab O = Tab("x", "ll","ppp");
wind->changeActiveTabTo(5);
Tab Q = Tab("aa", "nn","nn");
wind->moveActiveTabTo(0);
wind->newTab(A);
wind->getActiveTab();
wind->isEmpty();
Tab Y = Tab("nn", "ww","www");
wind->changeActiveTabTo(5);
Tab L = Tab("sss", "jj","xx");
wind->newTab(E);
Tab X = Tab("y", "hh","e");
wind->newTab(J);
wind->getActiveTab();
wind->print();
Tab Z = Tab("xx", "p","gg");
wind->isEmpty();
wind->moveActiveTabTo(0);
Tab P = Tab("aaa", "xx","c");
wind->isEmpty();
wind->getActiveTab();
Tab K = Tab("hh", "kkk","i");
wind->newTab(K);
Tab T = Tab("o", "f","l");
wind->changeActiveTabTo(2);
wind->print();
wind->isEmpty();
Tab H = Tab("nnn", "qqq","f");
wind->newTab(H);
Tab U = Tab("oo", "z","gg");
wind->changeActiveTabTo(1);
wind->getActiveTab();
Tab G = Tab("eee", "n","rr");
wind->changeActiveTabTo(2);
wind->print();
wind->moveActiveTabTo(2);
Tab F = Tab("gg", "mmm","ggg");
wind->getActiveTab();
wind->isEmpty();
wind->closeTab();
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->closeTab();
wind->isEmpty();
Tab B = Tab("v", "l","kk");
wind->newTab(B);
wind->getActiveTab();
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->getActiveTab();
wind->newTab(F);
wind->moveActiveTabTo(3);
wind->print();
Tab N = Tab("f", "ttt","e");
wind->print();
Tab S = Tab("x", "vvv","ff");
wind->changeActiveTabTo(2);
wind->closeTab();
wind->print();
wind->moveActiveTabTo(1);
wind->closeTab();
Tab D = Tab("e", "s","zz");
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->newTab(D);
wind->newTab(G);
wind->moveActiveTabTo(5);
Tab I = Tab("f", "ttt","vv");
wind->moveActiveTabTo(4);
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(1);
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(3);
Tab C = Tab("lll", "i","tt");
wind->newTab(C);
wind->isEmpty();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(3);
wind->closeTab();
wind->closeTab();
wind->getActiveTab();
wind->newTab(I);
wind->newTab(L);
wind->print();
wind->moveActiveTabTo(3);
wind->print();
wind->print();
wind->newTab(N);
wind->moveActiveTabTo(4);
wind->newTab(O);
wind->isEmpty();
wind->getActiveTab();
Tab M = Tab("m", "c","fff");
wind->changeActiveTabTo(0);
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(3);
wind->changeActiveTabTo(0);
wind->closeTab();
wind->moveActiveTabTo(5);
wind->closeTab();
wind->newTab(M);
wind->changeActiveTabTo(4);
wind->isEmpty();
wind->print();
wind->print();
delete wind;
}
	return 0;
};