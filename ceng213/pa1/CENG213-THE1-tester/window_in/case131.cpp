#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Window* wind = new Window();
wind->moveActiveTabTo(4);
Tab L = Tab("b", "uuu","d");
wind->changeActiveTabTo(2);
wind->closeTab();
Tab O = Tab("gg", "ww","ggg");
wind->closeTab();
Tab J = Tab("sss", "f","xxx");
wind->changeActiveTabTo(2);
Tab Z = Tab("pp", "jj","n");
wind->print();
wind->changeActiveTabTo(3);
Tab N = Tab("mm", "fff","xx");
wind->closeTab();
Tab R = Tab("cc", "fff","rrr");
wind->newTab(J);
Tab Q = Tab("ccc", "s","ss");
wind->isEmpty();
Tab I = Tab("bbb", "e","qq");
wind->closeTab();
Tab K = Tab("q", "p","xx");
wind->print();
Tab B = Tab("g", "uuu","c");
wind->closeTab();
wind->changeActiveTabTo(0);
Tab T = Tab("w", "y","xx");
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->closeTab();
Tab M = Tab("ww", "bbb","b");
wind->getActiveTab();
Tab E = Tab("ttt", "qq","fff");
wind->getActiveTab();
Tab P = Tab("h", "vv","zz");
wind->changeActiveTabTo(0);
Tab C = Tab("nnn", "www","p");
wind->newTab(B);
wind->newTab(C);
wind->moveActiveTabTo(3);
Tab V = Tab("j", "yyy","s");
wind->getActiveTab();
wind->print();
Tab G = Tab("vvv", "s","d");
wind->moveActiveTabTo(1);
wind->getActiveTab();
wind->newTab(E);
wind->isEmpty();
wind->closeTab();
Tab A = Tab("ii", "xx","n");
wind->newTab(A);
wind->getActiveTab();
wind->moveActiveTabTo(0);
Tab X = Tab("yyy", "r","ww");
wind->closeTab();
wind->newTab(G);
wind->moveActiveTabTo(4);
Tab H = Tab("zz", "t","jj");
wind->closeTab();
wind->isEmpty();
wind->moveActiveTabTo(1);
Tab F = Tab("w", "jj","bbb");
wind->moveActiveTabTo(0);
wind->getActiveTab();
wind->closeTab();
Tab Y = Tab("nnn", "m","sss");
wind->changeActiveTabTo(2);
wind->getActiveTab();
wind->newTab(F);
wind->closeTab();
wind->changeActiveTabTo(3);
wind->getActiveTab();
wind->getActiveTab();
wind->moveActiveTabTo(5);
wind->changeActiveTabTo(5);
wind->getActiveTab();
wind->changeActiveTabTo(0);
wind->newTab(H);
wind->moveActiveTabTo(5);
wind->print();
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(4);
wind->closeTab();
wind->print();
wind->moveActiveTabTo(1);
wind->changeActiveTabTo(1);
wind->newTab(I);
wind->moveActiveTabTo(0);
wind->moveActiveTabTo(0);
wind->isEmpty();
wind->moveActiveTabTo(3);
wind->moveActiveTabTo(2);
wind->closeTab();
wind->newTab(K);
wind->print();
wind->moveActiveTabTo(5);
wind->print();
wind->getActiveTab();
wind->changeActiveTabTo(3);
wind->newTab(L);
wind->print();
wind->changeActiveTabTo(5);
wind->print();
wind->changeActiveTabTo(5);
wind->closeTab();
wind->print();
wind->closeTab();
wind->print();
wind->closeTab();
wind->moveActiveTabTo(5);
wind->closeTab();
Tab U = Tab("dd", "ddd","yy");
wind->changeActiveTabTo(2);
wind->print();
wind->getActiveTab();
wind->moveActiveTabTo(4);
wind->print();
wind->changeActiveTabTo(3);
Tab S = Tab("w", "b","h");
wind->closeTab();
Tab D = Tab("a", "nnn","tt");
wind->closeTab();
wind->changeActiveTabTo(4);
wind->changeActiveTabTo(0);
wind->isEmpty();
wind->newTab(D);
wind->changeActiveTabTo(3);
delete wind;
}
	return 0;
};