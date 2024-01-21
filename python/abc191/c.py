"""考察
うっかり凸な多角形を想像しがちだが、凹んでいてもよい
下なら8

5 5
..#..
.###.
.###.
.###.
.....

想定される計算方法は？
- 辺を考えると多分死ぬ
- 頂点をどう判定するかを考えれば良い
- 角とその隣が白であればそれは頂点(最大4つ)
- (x, y) + (-1, -1)と(-1, 0)と(0, -1)が.であればいいみたいな.
- →これでは, 以下をフォローできない
....
.#..
.##.
....
- 

"""


def findedge(x, y, strrlist):
    edge = 0
    for dx in [-1, 1]:
        for dy in [-1, 1]:
            if (
                strrlist[x + dx][y + dy] == "."
                and strrlist[x + dx][y + 0] == "."
                and strrlist[x + 0][y + dy] == "."
            ) or (
                strrlist[x + dx][y + dy] == "."
                and strrlist[x + dx][y + 0] == "#"
                and strrlist[x + 0][y + dy] == "#"
            ):
                edge += 1
    return edge


h, w = map(int, input().split(" "))
s = []
s.append("." * (w + 2))
for i in range(h):
    s.append(f".{input()}.")
s.append("." * (w + 2))

ans = 0
for y in range(1, w + 1):
    for x in range(1, h + 1):
        if s[x][y] == "#":
            ans += findedge(x, y, s)

print(ans)
