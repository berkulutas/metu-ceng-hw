#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->print();
Tab A = Tab("mmm", "ii","uuu");
wind->getActiveTab();
Tab S = Tab("qq", "ooo","hhh");
wind->moveActiveTabTo(1);
Tab D = Tab("l", "l","yy");
wind->isEmpty();
wind->print();
Tab Q = Tab("qq", "yyy","d");
wind->changeActiveTabTo(5);
wind->newTab(A);
Tab H = Tab("rrr", "uuu","s");
wind->newTab(D);
wind->changeActiveTabTo(4);
wind->closeTab();
Tab P = Tab("gg", "rrr","y");
wind->print();
Tab V = Tab("ooo", "ggg","aaa");
wind->getActiveTab();
Tab Y = Tab("pp", "kk","pp");
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->closeTab();
wind->moveActiveTabTo(2);
Tab K = Tab("zz", "jj","vvv");
wind->getActiveTab();
Tab R = Tab("j", "gg","rr");
wind->newTab(H);
wind->getActiveTab();
Tab J = Tab("mm", "pp","d");
wind->getActiveTab();
Tab N = Tab("ddd", "mm","yy");
wind->isEmpty();
wind->changeActiveTabTo(3);
Tab M = Tab("ppp", "sss","ppp");
wind->changeActiveTabTo(2);
wind->closeTab();
Tab T = Tab("ff", "zz","sss");
wind->changeActiveTabTo(0);
wind->getActiveTab();
wind->closeTab();
Tab O = Tab("ccc", "w","p");
wind->newTab(J);
wind->changeActiveTabTo(5);
Tab B = Tab("gg", "gg","o");
wind->print();
Tab U = Tab("tt", "j","mm");
wind->moveActiveTabTo(5);
Tab X = Tab("ccc", "kk","yy");
wind->moveActiveTabTo(4);
Tab I = Tab("iii", "kkk","kkk");
wind->newTab(B);
wind->newTab(I);
wind->moveActiveTabTo(1);
wind->print();
wind->isEmpty();
Tab W = Tab("c", "a","p");
wind->moveActiveTabTo(1);
wind->closeTab();
Tab F = Tab("mm", "www","aaa");
wind->print();
wind->print();
wind->changeActiveTabTo(3);
wind->isEmpty();
wind->getActiveTab();
wind->closeTab();
wind->isEmpty();
wind->newTab(F);
Tab C = Tab("vvv", "d","fff");
wind->changeActiveTabTo(2);
Tab G = Tab("ggg", "tt","ttt");
wind->changeActiveTabTo(5);
wind->getActiveTab();
Tab L = Tab("yyy", "y","ttt");
wind->newTab(C);
wind->newTab(G);
wind->moveActiveTabTo(4);
wind->changeActiveTabTo(1);
wind->moveActiveTabTo(1);
wind->print();
wind->moveActiveTabTo(2);
wind->closeTab();
wind->getActiveTab();
Tab E = Tab("u", "iii","z");
wind->closeTab();
wind->newTab(E);
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(5);
wind->isEmpty();
wind->newTab(K);
wind->getActiveTab();
wind->isEmpty();
Tab Z = Tab("yy", "ggg","kkk");
wind->moveActiveTabTo(0);
wind->changeActiveTabTo(1);
wind->closeTab();
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->print();
wind->moveActiveTabTo(4);
wind->print();
wind->isEmpty();
wind->closeTab();
wind->newTab(L);
wind->getActiveTab();
wind->print();
wind->print();
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->getActiveTab();
wind->newTab(M);
wind->changeActiveTabTo(5);
wind->changeActiveTabTo(1);
wind->changeActiveTabTo(3);
wind->closeTab();
wind->changeActiveTabTo(5);
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(4);
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->isEmpty();
wind->moveActiveTabTo(0);
wind->print();
delete wind;
}
	return 0;
};