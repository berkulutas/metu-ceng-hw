#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
Tab N = Tab("c", "mm","sss");
wind->closeTab();
Tab I = Tab("o", "ooo","n");
wind->moveActiveTabTo(2);
Tab O = Tab("r", "t","nnn");
wind->moveActiveTabTo(0);
Tab Q = Tab("nnn", "ff","r");
wind->newTab(I);
Tab S = Tab("ooo", "z","h");
wind->newTab(N);
Tab B = Tab("n", "ggg","x");
wind->closeTab();
Tab F = Tab("y", "ii","ggg");
wind->isEmpty();
Tab H = Tab("yy", "ggg","f");
wind->isEmpty();
Tab V = Tab("nnn", "u","z");
wind->getActiveTab();
Tab A = Tab("ppp", "uuu","c");
wind->getActiveTab();
Tab E = Tab("vvv", "ww","rr");
wind->print();
wind->isEmpty();
Tab P = Tab("k", "cc","mmm");
wind->newTab(A);
wind->newTab(B);
wind->getActiveTab();
wind->print();
wind->closeTab();
wind->isEmpty();
Tab Y = Tab("v", "v","eee");
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(5);
Tab D = Tab("aa", "zz","uuu");
wind->closeTab();
Tab U = Tab("n", "hh","j");
wind->isEmpty();
Tab G = Tab("qqq", "eee","i");
wind->newTab(D);
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(0);
Tab X = Tab("s", "q","k");
wind->getActiveTab();
Tab W = Tab("ll", "cc","rrr");
wind->getActiveTab();
wind->newTab(E);
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(2);
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(3);
Tab T = Tab("ww", "ss","mm");
wind->getActiveTab();
Tab J = Tab("qq", "e","tt");
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(3);
wind->newTab(F);
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->newTab(G);
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->print();
wind->changeActiveTabTo(3);
wind->moveActiveTabTo(2);
wind->changeActiveTabTo(4);
wind->closeTab();
wind->closeTab();
wind->newTab(H);
wind->changeActiveTabTo(0);
wind->print();
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->closeTab();
wind->isEmpty();
wind->newTab(J);
wind->newTab(O);
wind->isEmpty();
Tab K = Tab("uu", "uuu","nn");
wind->isEmpty();
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(2);
wind->isEmpty();
wind->newTab(K);
Tab M = Tab("s", "ff","bbb");
wind->changeActiveTabTo(0);
wind->newTab(M);
Tab R = Tab("l", "kkk","w");
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->isEmpty();
wind->getActiveTab();
wind->moveActiveTabTo(0);
wind->print();
Tab Z = Tab("u", "s","qqq");
wind->print();
wind->newTab(P);
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->newTab(Q);
wind->getActiveTab();
wind->moveActiveTabTo(1);
wind->newTab(R);
wind->getActiveTab();
wind->moveActiveTabTo(0);
delete wind;
}
	return 0;
};