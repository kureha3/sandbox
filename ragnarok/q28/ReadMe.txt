起動しない場合は多分ファイルが足りない。
http://www.microsoft.com/downloads/details.aspx?displaylang=ja&FamilyID=a5c84275-3b97-4ab7-a40d-3802b2af5fc2


/CONFIG/CLIENT/FILE
    クライアントファイル名 (けど使ってない)
/CONFIG/CLIENT/PATH
    クライアントファイルがあるディレクトリ
    最後に"\"をつけるとまずい

/CONFIG/WEB/ACKWAIT
    Web アクセス時のタイムアウト値 (sec)

/CONFIG/ACCOUNTINFO
    ACCOUNT を子に持てる
/CONFIG/ACCOUNTINFO/ACCOUNT
    アカウント情報1つ分

/CONFIG/ACCOUNTINFO/ACCOUNT[@NAME=]
	アカウント情報名
    ここで指定した文字列を起動引数につけることになる

/CONFIG/ACCOUNTINFO/ACCOUNT/SIID
    "ゲーム起動" の右クリック→ "ショートカットのコピー" で得られる URL の SIID= 以降の文字列
    01234567-0123-0123-0123-0123456789ab な感じのやつ

/CONFIG/ACCOUNTINFO/ACCOUNT/GUNGHOID
    そのまま

/CONFIG/ACCOUNTINFO/ACCOUNT/PASSWORD
    GunghoID のパスワード


あとは見よう見まねで。
config.xml は平文でパスワードを持つので保管に注意。


2009-02-09
    Password を表示することはないだろう的理由。
    SHA-1: 4325D45102C41CDFE4E182E7C8F91F7E0F5D93BF

2009-02-08
    SHA-1: C69E7EE471AD7916BDE402C614C2C30C2E2D6492
