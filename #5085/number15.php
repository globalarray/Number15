<?php

$firstNumber = intval(trim(fgets(STDIN)));
$finalNumber = intval(trim(fgets(STDIN))) + 1;
$countEvenNumbers = 0;

while($firstNumber < $finalNumber) {
	if (!($firstNumber % 2)) {
		$countEvenNumbers++;
	}
	$firstNumber++;
}
echo $countEvenNumbers;
?>