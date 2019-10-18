# 42_test
Used for testing during peer-to-peer evaluations.

# Norm
`python <(curl -s https://raw.githubusercontent.com/mmbatha/test/mmbatha-patch-1/pynorm.py)`, a variant of `https://github.com/richard-dp/pynorm`

# Libftest
`git clone https://github.com/jtoty/Libftest`

# LibC Functions #1
`bash grademe.sh ft_strlen ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint`

# LibC Functions #2
`bash grademe.sh ft_toupper ft_tolower ft_memchr ft_strchr ft_strrchr ft_bzero`

# LibC Functions #3
`bash grademe.sh ft_memcpy ft_strcpy ft_strcat ft_strcmp ft_strstr ft_memmove ft_memcmp`

# LibC Functions #4
`bash grademe.sh ft_strlcat ft_strdup ft_atoi ft_memccpy ft_strnstr ft_strncmp ft_strncpy ft_strncat`

# Additional Functions #1
`bash grademe.sh ft_memalloc ft_putchar ft_putstr ft_putendl ft_putnbr ft_strnew ft_strdel ft_strclr ft_strequ ft_strnequ ft_strsub ft_strjoin ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd`

# Additional Functions #2
`bash grademe.sh ft_memdel ft_striter ft_striteri ft_strmap ft_strmapi ft_strtrim ft_strsplit ft_itoa`

# Bonus part (if it exists)
`bash grademe.sh ft_lstnew ft_lstadd ft_lstdelone ft_lstdel ft_lstiter ft_lstmap`

# 42FileChecker
`git clone https://github.com/jgigault/42FileChecker`

# get_next_line
`git clone https://github.com/mmbatha/GNL-1.git`
## -- Files to copy
`cp GNL-1/bible.txt corr/`
`cp GNL-1/gnl* corr/`
`cp GNL-1/test_* corr/`
`cd corr/`
## -- Shells to run
`sh gnl_intra_test.sh`
`sh gnl.sh`
## -- Actual tests
`./test_gnl bible.txt`
`./test_gnl test_m38.txt`
`./test_gnl test_huge.txt`
`./test_gnl test_lines.txt`
`./test_gnl test_lines2.txt`
`./test_gnl test_eminem.txt`
`./test_gnl test_lorem_5para.txt`
`./test_gnl test_one_big_fat_line.txt`
(c) 2019 Courtesy of Damothepirate

# memory leaks
`leaks [process ID or name] >> leaks.txt`

# detect leaks
[Leak Detector](leak_detector_c)

# Swingy
`mvn --version`
## -- Files to check 
`pom.xml`
`swingy.iml`
## -- Compile
`mvn clean package`

# Peer Video
https://youtu.be/B2ThaazAhEA

# PHP Bootcamp
## Day 03
## Clone
`git clone [] ~/Desktop/MAMP/apache2/htdocs/mmcorr`
## ex00
`sh ~/Desktop/MAMP/ctlscript.sh start`
## ex01
`curl 'http://localhost:8080/mmcorr/ex01/phpinfo.php'`
## ex02
`curl 'http://localhost:8080/mmcorr/ex02/print_get.php?login=mmbatha&evaluator=Monde'`

`curl 'http://localhost:8080/mmcorr/ex02/print_get.php?&=&login=mmbatha&&evaluator=Monde'`
## ex03
`curl -c cook.txt 'http://localhost:8080/mmcorr/ex03/cookie_crisp.php?action=set&name=plat&value=choucroute'`

`curl -b cook.txt 'http://localhost:8080/mmcorr/ex03/cookie_crisp.php?action=get&name=plat'`

`curl -c cook.txt 'http://localhost:8080/mmcorr/ex03/cookie_crisp.php?action=del&name=plat'`

`curl -b cook.txt 'http://localhost:8080/mmcorr/ex03/cookie_crisp.php?action=get&name=plat'`
## ex04
`curl 'http://localhost:8080/mmcorr/ex04/raw_text.php'`
## ex05
`curl --head 'http://localhost:8080/mmcorr/ex05/read_img.php'`
## ex06
`curl --user root:root 'http://localhost:8080/mmcorr/ex06/members_only.php'`

`curl --user zaz:root 'http://localhost:8080/mmcorr/ex06/members_only.php'`

`curl --user zaz:ilovemylittlepony 'http://localhost:8080/mmcorr/ex06/members_only.php'`

## Day 04
## ex00
`curl -vc cook.txt 'http://localhost:8080/mmcorr/ex00/index.php'`

`curl -vb cook.txt 'http://localhost:8080/mmcorr/ex00/index.php?login=sb&passwd=beeone&submit=OK'`

`curl -vb cook.txt 'http://localhost:8080/mmcorr/ex00/index.php'`

`curl -v 'http://localhost:8080/mmcorr/ex00/index.php'`

## ex01
`rm htdocs/private/passwd`

`curl -d login=toto1 - passwd=titi1 -d submit=OK 'http://localhost:8080/mmcorr/ex01/create.php'`

`curl -d login=toto2 - passwd= -d submit=OK 'http://localhost:8080/mmcorr/ex01/create.php'`

## ex02
`rm /htdocs/private/passwd`

`curl -d login=x -d passwd=21 -d submit=OK 'http://localhost:8080/mmcorr/ex01/create.php'`

`curl -d login=x -d oldpw=21 -d newpw=42 -d submit=OK 'http://localhost:8080/mmcorr/ex02/modif.php'`

`more ~/http/Piscines/j04/htdocs/private/passwd`

`curl -d login=x -d oldpw=21 -d newpw=42 -d submit=OK 'http://localhost:8080/mmcorr/ex02/modif.php'`

`curl -d login=x -d oldpw=42 -d newpw= -d submit=OK 'http://localhost:8080/mmcorr/ex02/modif.php'`

## ex03
`rm /htdocs/private/passwd`

`curl -d login=toto -d passwd=titi -d submit=OK 'http://localhost:8080/mmcorr/ex01/create.php'`

`curl 'http://localhost:8080/mmcorr/ex03/login.php?login=toto&passwd=titi'`

## Day 05
## ex00
`cat ~/MAMP/apache2/config.php`

`mysql -u [idbuser] -p < ~/MAMP/apache2/htdocs/mmcorr/ex00/ex00.sql`

## ex01
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex01/ex01.sql` - DEFAULT 'toto', ENUM()

## ex02
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex02/ex02.sql`

## ex03
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex03/ex03.sql`

## ex04
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex04/ex04.sql` - UPDATE... SET... INTERVAL 20 YEAR... id > 5

## ex05
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex05/ex05.sql` - LIMIT 5

## ex06
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex06/ex06.sql` - LIKE '%Vincent%'... LIKE '%vincent%'

## ex07
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex07/ex07.sql` - LIKE '%42%'... LIKE '%42%' ASC;

## ex08
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex08/ex08.sql` - CONCAT_WS()... AS

## ex09
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex09/ex09.sql` - COUNT... AS

## ex10
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex10/ex10.sql` - INNER JOIN... DESC

## ex11
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex11/ex11.sql` - UPPER()

## ex12
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex12/ex12.sql` - OR

## ex13
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex13/ex13.sql` - ROUND(AVG())

## ex14
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex14/ex14.sql` - SUM()

## ex15
`mysql -u [idbuser] -p db_[username] < ~/MAMP/apache2/htdocs/mmcorr/ex15/ex15.sql` - REVERSE(SUBSTRING())
