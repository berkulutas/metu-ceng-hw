#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->isEmpty();
Tab Z = Tab("g", "g","dd");
wind->print();
Tab I = Tab("i", "h","hh");
wind->isEmpty();
Tab R = Tab("ddd", "xx","ss");
wind->changeActiveTabTo(1);
wind->print();
Tab Q = Tab("nnn", "yy","j");
wind->moveActiveTabTo(1);
Tab T = Tab("vv", "xx","m");
wind->print();
Tab S = Tab("b", "vvv","c");
wind->newTab(I);
wind->moveActiveTabTo(3);
Tab K = Tab("vvv", "ccc","qq");
wind->isEmpty();
wind->newTab(K);
Tab A = Tab("nnn", "g","eee");
wind->changeActiveTabTo(0);
Tab G = Tab("rr", "zzz","lll");
wind->closeTab();
wind->closeTab();
wind->print();
Tab W = Tab("kkk", "uuu","v");
wind->closeTab();
wind->closeTab();
Tab Y = Tab("e", "oo","zzz");
wind->changeActiveTabTo(2);
Tab M = Tab("aa", "kk","ddd");
wind->getActiveTab();
wind->moveActiveTabTo(5);
Tab C = Tab("ll", "c","d");
wind->moveActiveTabTo(1);
Tab N = Tab("u", "oo","p");
wind->getActiveTab();
wind->getActiveTab();
Tab E = Tab("w", "ww","uuu");
wind->getActiveTab();
wind->moveActiveTabTo(1);
Tab V = Tab("i", "zzz","x");
wind->newTab(A);
wind->print();
Tab L = Tab("dd", "v","hh");
wind->closeTab();
wind->moveActiveTabTo(2);
wind->getActiveTab();
wind->closeTab();
wind->moveActiveTabTo(1);
wind->moveActiveTabTo(5);
Tab P = Tab("o", "ppp","v");
wind->getActiveTab();
wind->getActiveTab();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(4);
wind->moveActiveTabTo(0);
Tab H = Tab("ee", "nn","yyy");
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->newTab(C);
wind->moveActiveTabTo(2);
wind->moveActiveTabTo(0);
wind->print();
Tab D = Tab("sss", "qqq","ccc");
wind->getActiveTab();
wind->newTab(D);
Tab F = Tab("y", "www","lll");
wind->print();
wind->changeActiveTabTo(2);
wind->newTab(E);
wind->changeActiveTabTo(0);
wind->moveActiveTabTo(3);
wind->print();
wind->print();
wind->changeActiveTabTo(4);
wind->newTab(F);
Tab U = Tab("y", "aaa","zzz");
wind->getActiveTab();
Tab J = Tab("o", "i","yy");
wind->closeTab();
wind->isEmpty();
wind->closeTab();
wind->isEmpty();
wind->changeActiveTabTo(1);
wind->getActiveTab();
wind->newTab(G);
wind->closeTab();
wind->newTab(H);
wind->moveActiveTabTo(5);
wind->getActiveTab();
wind->newTab(J);
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(4);
wind->print();
wind->newTab(L);
wind->isEmpty();
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->getActiveTab();
wind->closeTab();
wind->print();
wind->changeActiveTabTo(4);
wind->getActiveTab();
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->isEmpty();
wind->isEmpty();
wind->print();
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->isEmpty();
wind->isEmpty();
wind->newTab(M);
wind->getActiveTab();
wind->getActiveTab();
wind->newTab(N);
delete wind;
}
	return 0;
};