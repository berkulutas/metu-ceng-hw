#include <iostream>
#include "../tester/Window.cpp"
#include "../tester/Browser.cpp"
#include "../tester/LinkedList.cpp"
int main() {
{
Browser* brows = new Browser();
Window a;
Window b;
Window c;
Window d;
Tab A = Tab("n", "ff","nn");
Tab B = Tab("eee", "bbb","j");
Tab C = Tab("ccc", "ee","rrr");
Tab D = Tab("c", "ddd","aaa");
Tab E = Tab("rr", "d","yyy");
Tab F = Tab("vv", "mm","xxx");
Tab G = Tab("z", "g","kk");
Tab H = Tab("xxx", "ww","f");
Tab I = Tab("hhh", "qqq","n");
Tab J = Tab("vvv", "k","gg");
Tab K = Tab("rrr", "oo","ggg");
Tab L = Tab("d", "g","o");
Tab M = Tab("w", "aaa","qqq");
Tab N = Tab("yy", "g","t");
Tab O = Tab("qq", "www","aaa");
Tab P = Tab("f", "u","kk");
Tab Q = Tab("s", "s","r");
Tab R = Tab("q", "bb","a");
Tab S = Tab("g", "ll","hh");
Tab T = Tab("ccc", "vv","i");
Tab U = Tab("u", "aa","jjj");
Tab V = Tab("n", "dd","ppp");
Tab W = Tab("sss", "q","qq");
Tab X = Tab("a", "d","ppp");
Tab Y = Tab("f", "l","hhh");
Tab Z = Tab("vv", "u","dd");
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(A);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.newTab(B);
b.changeActiveTabTo(0);
c.newTab(C);
d.newTab(D);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(E);
d.newTab(F);
a.changeActiveTabTo(5);
b.newTab(G);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(H);
b.newTab(I);
c.newTab(J);
d.changeActiveTabTo(0);
a.newTab(K);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.newTab(L);
a.newTab(M);
b.moveActiveTabTo(1);
c.newTab(N);
d.newTab(O);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.newTab(P);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(3);
b.newTab(Q);
c.moveActiveTabTo(3);
d.newTab(R);
a.newTab(S);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(T);
b.newTab(U);
c.newTab(V);
d.changeActiveTabTo(4);
a.newTab(W);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(3);
b.newTab(X);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.newTab(Y);
b.changeActiveTabTo(4);
c.newTab(Z);
d.moveActiveTabTo(4);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
a.changeActiveTabTo(4);
c.changeActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.changeActiveTabTo(2);
b.moveActiveTabTo(0);
d.moveActiveTabTo(0);
d.moveActiveTabTo(4);
d.changeActiveTabTo(2);
a.changeActiveTabTo(4);
b.moveActiveTabTo(4);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
a.changeActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
d.moveActiveTabTo(0);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(4);
brows->getWindow(9);
brows->print();
brows->switchToWindow(4);
brows->print();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(8);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->getWindow(9);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(2);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(6);
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->closeWindow();
brows->getWindow(6);
brows->getWindow(2);
brows->getWindow(0);
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->getWindow(5);
brows->mergeAllWindows();
brows->newWindow();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->switchToWindow(2);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->closeWindow();
brows->getWindow(5);
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->print();
brows->getWindow(1);
brows->newWindow();
brows->getWindow(2);
brows->newWindow();
brows->getWindow(2);
brows->print();
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(4);
brows->getWindow(0);
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(8);
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(4);
brows->mergeAllWindows();
brows->getWindow(2);
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(7);
brows->closeWindow();
brows->print();
brows->getWindow(3);
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(9);
brows->closeWindow();
brows->newWindow();
brows->switchToWindow(2);
brows->switchToWindow(2);
brows->print();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
delete brows;
}
	return 0;
};