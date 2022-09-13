<?php

$daysNum = trim(fgets(STDIN));
$daysSuitable = 0;
$daysTemps = 0;

if ($daysNum < 1 || $daysNum > 31) exit('Введено неверное количество дней');

for($i = 0; $i < $daysNum; $i++) {
	$temp = trim(fgets(STDIN));
	$daysTemps += $temp;
	if ($temp > 0) $daysSuitable++;
}

echo ($daysTemps / $daysNum) . PHP_EOL;
echo ($daysSuitable >= 5) ? 'YES' : 'NO';
?>
