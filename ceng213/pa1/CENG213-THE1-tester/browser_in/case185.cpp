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
Tab A = Tab("h", "qqq","o");
Tab B = Tab("ss", "uu","n");
Tab C = Tab("xx", "aaa","nn");
Tab D = Tab("t", "zz","q");
Tab E = Tab("j", "ooo","w");
Tab F = Tab("ll", "cc","qqq");
Tab G = Tab("bb", "iii","l");
Tab H = Tab("nnn", "iii","fff");
Tab I = Tab("z", "iii","kk");
Tab J = Tab("lll", "r","aaa");
Tab K = Tab("z", "kk","s");
Tab L = Tab("r", "ii","k");
Tab M = Tab("zz", "e","w");
Tab N = Tab("oo", "w","ll");
Tab O = Tab("xxx", "ll","eee");
Tab P = Tab("zz", "r","z");
Tab Q = Tab("bbb", "ggg","aa");
Tab R = Tab("j", "o","rr");
Tab S = Tab("ggg", "r","ii");
Tab T = Tab("bbb", "bbb","pp");
Tab U = Tab("i", "f","qqq");
Tab V = Tab("gg", "o","ggg");
Tab W = Tab("ww", "o","ppp");
Tab X = Tab("uuu", "jjj","u");
Tab Y = Tab("w", "ddd","e");
Tab Z = Tab("bb", "nnn","e");
a.moveActiveTabTo(0);
b.newTab(A);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(B);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.newTab(C);
a.newTab(D);
b.moveActiveTabTo(1);
c.newTab(E);
d.newTab(F);
a.newTab(G);
b.newTab(H);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(1);
b.newTab(I);
c.newTab(J);
d.moveActiveTabTo(1);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.newTab(K);
d.changeActiveTabTo(2);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(4);
b.newTab(L);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(5);
b.newTab(M);
c.newTab(N);
d.moveActiveTabTo(5);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(O);
d.newTab(P);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(1);
b.newTab(Q);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.newTab(R);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.newTab(S);
b.changeActiveTabTo(1);
c.newTab(T);
d.changeActiveTabTo(1);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.changeActiveTabTo(1);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.newTab(U);
d.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.newTab(V);
c.moveActiveTabTo(2);
d.newTab(W);
a.newTab(X);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.newTab(Y);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.moveActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(Z);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
a.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.changeActiveTabTo(3);
c.moveActiveTabTo(4);
a.moveActiveTabTo(4);
c.changeActiveTabTo(4);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.moveActiveTabTo(3);
a.changeActiveTabTo(1);
c.changeActiveTabTo(1);
d.changeActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.moveActiveTabTo(4);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(0);
d.changeActiveTabTo(0);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(3);
a.moveActiveTabTo(1);
b.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(0);
a.changeActiveTabTo(0);
c.changeActiveTabTo(0);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(1);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(4);
b.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.changeActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->mergeAllWindows();
brows->switchToWindow(4);
brows->print();
brows->print();
brows->getWindow(6);
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(7);
brows->closeWindow();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->newWindow();
brows->newWindow();
brows->newWindow();
brows->getWindow(8);
brows->newWindow();
brows->closeEmptyWindows();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeWindow();
brows->switchToWindow(5);
brows->switchToWindow(2);
brows->switchToWindow(8);
brows->closeEmptyWindows();
brows->getWindow(8);
brows->print();
brows->print();
brows->newWindow();
brows->closeWindow();
brows->print();
brows->closeWindow();
brows->switchToWindow(7);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(1);
brows->closeEmptyWindows();
brows->getWindow(8);
brows->closeEmptyWindows();
brows->getWindow(5);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->switchToWindow(3);
brows->getWindow(0);
brows->closeEmptyWindows();
brows->getWindow(7);
brows->switchToWindow(6);
brows->closeWindow();
brows->print();
brows->switchToWindow(4);
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(5);
brows->getWindow(4);
brows->closeEmptyWindows();
brows->switchToWindow(7);
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(5);
brows->newWindow();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->switchToWindow(7);
brows->closeWindow();
brows->mergeAllWindows();
brows->switchToWindow(1);
brows->print();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->getWindow(8);
brows->closeWindow();
brows->getWindow(6);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->getWindow(9);
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->getWindow(3);
brows->newWindow();
brows->getWindow(8);
brows->newWindow();
brows->closeWindow();
brows->print();
brows->newWindow();
brows->switchToWindow(5);
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->getWindow(7);
brows->switchToWindow(3);
brows->newWindow();
brows->getWindow(4);
brows->newWindow();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->switchToWindow(2);
brows->switchToWindow(3);
brows->print();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->getWindow(3);
delete brows;
}
	return 0;
};