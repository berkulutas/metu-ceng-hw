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
Tab A = Tab("s", "www","m");
Tab B = Tab("oo", "q","z");
Tab C = Tab("tt", "ppp","f");
Tab D = Tab("zz", "n","p");
Tab E = Tab("nn", "bbb","jj");
Tab F = Tab("ooo", "r","u");
Tab G = Tab("e", "rrr","vv");
Tab H = Tab("a", "t","kkk");
Tab I = Tab("b", "bb","nn");
Tab J = Tab("ee", "qq","t");
Tab K = Tab("r", "qq","y");
Tab L = Tab("ppp", "n","yyy");
Tab M = Tab("aa", "ss","j");
Tab N = Tab("ss", "q","y");
Tab O = Tab("eee", "w","qqq");
Tab P = Tab("eee", "ggg","ppp");
Tab Q = Tab("ppp", "dd","n");
Tab R = Tab("ooo", "zz","w");
Tab S = Tab("nn", "qq","q");
Tab T = Tab("i", "bb","v");
Tab U = Tab("w", "ss","qq");
Tab V = Tab("iii", "i","h");
Tab W = Tab("c", "x","z");
Tab X = Tab("dd", "b","x");
Tab Y = Tab("uu", "ww","ccc");
Tab Z = Tab("xx", "o","ddd");
a.changeActiveTabTo(3);
b.newTab(A);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.newTab(B);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.changeActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.newTab(C);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(0);
b.newTab(D);
c.newTab(E);
d.newTab(F);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.newTab(G);
b.moveActiveTabTo(3);
c.newTab(H);
d.moveActiveTabTo(3);
a.newTab(I);
b.newTab(J);
c.changeActiveTabTo(4);
d.newTab(K);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(L);
d.changeActiveTabTo(1);
a.changeActiveTabTo(0);
b.newTab(M);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.newTab(N);
d.changeActiveTabTo(1);
a.changeActiveTabTo(2);
b.newTab(O);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.newTab(P);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(4);
b.newTab(Q);
c.newTab(R);
d.newTab(S);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(T);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.moveActiveTabTo(1);
d.newTab(U);
a.changeActiveTabTo(0);
b.moveActiveTabTo(0);
c.newTab(V);
d.moveActiveTabTo(0);
a.newTab(W);
b.changeActiveTabTo(2);
c.newTab(X);
d.newTab(Y);
a.changeActiveTabTo(1);
b.newTab(Z);
c.newTab(Z);
d.newTab(Z);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
b.moveActiveTabTo(2);
a.moveActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(3);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
a.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
c.changeActiveTabTo(4);
d.changeActiveTabTo(4);
a.moveActiveTabTo(1);
b.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(3);
c.changeActiveTabTo(3);
d.changeActiveTabTo(3);
a.moveActiveTabTo(0);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.moveActiveTabTo(0);
a.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(0);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->newWindow();
brows->closeEmptyWindows();
brows->switchToWindow(3);
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->switchToWindow(9);
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->print();
brows->switchToWindow(5);
brows->getWindow(3);
brows->closeWindow();
brows->getWindow(7);
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(6);
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->getWindow(8);
brows->switchToWindow(6);
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(4);
brows->closeWindow();
brows->newWindow();
brows->getWindow(9);
brows->getWindow(2);
brows->closeEmptyWindows();
brows->closeWindow();
brows->getWindow(7);
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->closeWindow();
brows->switchToWindow(4);
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->getWindow(8);
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(5);
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->mergeAllWindows();
brows->print();
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->print();
brows->print();
brows->getWindow(1);
brows->print();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->switchToWindow(5);
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(8);
brows->closeWindow();
brows->closeEmptyWindows();
brows->print();
brows->switchToWindow(0);
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->getWindow(7);
brows->newWindow();
brows->newWindow();
brows->print();
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->print();
brows->closeWindow();
delete brows;
}
	return 0;
};