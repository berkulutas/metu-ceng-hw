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
Tab A = Tab("kk", "l","uuu");
Tab B = Tab("ee", "ww","jj");
Tab C = Tab("i", "v","uuu");
Tab D = Tab("rr", "v","vv");
Tab E = Tab("aa", "zz","xxx");
Tab F = Tab("l", "fff","qq");
Tab G = Tab("r", "yy","jjj");
Tab H = Tab("nn", "r","yyy");
Tab I = Tab("zz", "t","dd");
Tab J = Tab("www", "www","ppp");
Tab K = Tab("rrr", "pp","y");
Tab L = Tab("w", "ooo","lll");
Tab M = Tab("k", "w","rrr");
Tab N = Tab("ii", "lll","ddd");
Tab O = Tab("c", "ooo","q");
Tab P = Tab("e", "qqq","sss");
Tab Q = Tab("xxx", "cc","ii");
Tab R = Tab("ll", "n","jj");
Tab S = Tab("cc", "ooo","rrr");
Tab T = Tab("i", "aaa","xxx");
Tab U = Tab("vvv", "r","s");
Tab V = Tab("vvv", "bb","bbb");
Tab W = Tab("vv", "kk","eee");
Tab X = Tab("y", "hh","ttt");
Tab Y = Tab("j", "ccc","vvv");
Tab Z = Tab("j", "aa","eee");
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.newTab(A);
d.moveActiveTabTo(4);
a.changeActiveTabTo(2);
b.newTab(B);
c.newTab(C);
d.moveActiveTabTo(2);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.newTab(D);
a.newTab(E);
b.newTab(F);
c.moveActiveTabTo(4);
d.newTab(G);
a.changeActiveTabTo(3);
b.changeActiveTabTo(3);
c.newTab(H);
d.changeActiveTabTo(3);
a.newTab(I);
b.changeActiveTabTo(5);
c.newTab(J);
d.newTab(K);
a.newTab(L);
b.moveActiveTabTo(5);
c.moveActiveTabTo(5);
d.moveActiveTabTo(5);
a.newTab(M);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.newTab(N);
d.moveActiveTabTo(2);
a.moveActiveTabTo(2);
b.newTab(O);
c.changeActiveTabTo(2);
d.newTab(P);
a.newTab(Q);
b.newTab(R);
c.newTab(S);
d.changeActiveTabTo(1);
a.newTab(T);
b.changeActiveTabTo(0);
c.newTab(U);
d.changeActiveTabTo(0);
a.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.newTab(V);
a.newTab(W);
b.changeActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.newTab(X);
b.changeActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.newTab(Y);
b.changeActiveTabTo(4);
c.newTab(Z);
d.changeActiveTabTo(4);
a.changeActiveTabTo(5);
b.changeActiveTabTo(5);
d.changeActiveTabTo(5);
a.changeActiveTabTo(1);
b.moveActiveTabTo(1);
c.changeActiveTabTo(1);
d.moveActiveTabTo(1);
a.moveActiveTabTo(4);
c.moveActiveTabTo(4);
d.moveActiveTabTo(4);
a.moveActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(4);
b.moveActiveTabTo(4);
c.changeActiveTabTo(4);
b.changeActiveTabTo(3);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(1);
b.changeActiveTabTo(1);
d.changeActiveTabTo(1);
b.moveActiveTabTo(0);
c.changeActiveTabTo(0);
d.changeActiveTabTo(0);
a.moveActiveTabTo(5);
d.changeActiveTabTo(5);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
a.changeActiveTabTo(5);
b.moveActiveTabTo(5);
a.moveActiveTabTo(4);
b.changeActiveTabTo(4);
c.changeActiveTabTo(4);
d.moveActiveTabTo(4);
d.moveActiveTabTo(3);
a.moveActiveTabTo(3);
b.moveActiveTabTo(3);
c.changeActiveTabTo(3);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
c.moveActiveTabTo(1);
d.moveActiveTabTo(1);
a.changeActiveTabTo(0);
b.changeActiveTabTo(0);
c.moveActiveTabTo(0);
d.moveActiveTabTo(0);
a.moveActiveTabTo(2);
b.moveActiveTabTo(2);
d.changeActiveTabTo(2);
a.changeActiveTabTo(2);
b.changeActiveTabTo(2);
c.moveActiveTabTo(2);
d.moveActiveTabTo(2);
b.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(5);
b.moveActiveTabTo(5);
c.changeActiveTabTo(5);
d.changeActiveTabTo(5);
b.moveActiveTabTo(0);
c.moveActiveTabTo(0);
d.changeActiveTabTo(0);
b.moveActiveTabTo(3);
c.moveActiveTabTo(3);
d.moveActiveTabTo(3);
a.moveActiveTabTo(2);
b.changeActiveTabTo(2);
d.moveActiveTabTo(2);
b.moveActiveTabTo(2);
c.changeActiveTabTo(2);
a.moveActiveTabTo(2);
c.changeActiveTabTo(2);
d.moveActiveTabTo(2);
d.moveActiveTabTo(4);
a.changeActiveTabTo(3);
c.changeActiveTabTo(3);
d.moveActiveTabTo(3);
a.changeActiveTabTo(2);
b.moveActiveTabTo(2);
d.moveActiveTabTo(2);
a.changeActiveTabTo(5);
d.moveActiveTabTo(5);
brows->addWindow(a);
brows->addWindow(b);
brows->addWindow(c);
brows->addWindow(d);
brows->getWindow(2);
brows->print();
brows->mergeAllWindows();
brows->switchToWindow(0);
brows->newWindow();
brows->newWindow();
brows->getWindow(3);
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->print();
brows->switchToWindow(0);
brows->switchToWindow(2);
brows->getWindow(6);
brows->getWindow(4);
brows->closeWindow();
brows->switchToWindow(9);
brows->mergeAllWindows();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->getWindow(2);
brows->newWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->getWindow(0);
brows->getWindow(7);
brows->closeWindow();
brows->getWindow(9);
brows->getWindow(4);
brows->print();
brows->getWindow(2);
brows->closeEmptyWindows();
brows->closeWindow();
brows->closeWindow();
brows->print();
brows->print();
brows->switchToWindow(7);
brows->print();
brows->mergeAllWindows();
brows->print();
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->closeWindow();
brows->print();
brows->getWindow(0);
brows->closeEmptyWindows();
brows->print();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->closeWindow();
brows->getWindow(6);
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->newWindow();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->print();
brows->mergeAllWindows();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->getWindow(7);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->switchToWindow(2);
brows->switchToWindow(3);
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->newWindow();
brows->print();
brows->getWindow(3);
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->getWindow(3);
brows->mergeAllWindows();
brows->print();
brows->closeWindow();
brows->closeWindow();
brows->closeEmptyWindows();
brows->getWindow(1);
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->mergeAllWindows();
brows->closeWindow();
brows->mergeAllWindows();
brows->newWindow();
brows->closeWindow();
brows->switchToWindow(8);
brows->getWindow(4);
brows->print();
brows->switchToWindow(0);
brows->mergeAllWindows();
brows->closeWindow();
brows->newWindow();
brows->closeEmptyWindows();
brows->closeEmptyWindows();
brows->mergeAllWindows();
brows->closeWindow();
brows->getWindow(7);
brows->print();
delete brows;
}
	return 0;
};