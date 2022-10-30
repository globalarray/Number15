<?php

$numbersSummary = 0;

$numbersCount = intval(trim(fgets(STDIN)));

for ($i = 0; $i < $numbersCount; $i++) {
	$inputNumber = intval(trim(fgets(STDIN)));

	if (!($inputNumber % 3) && $inputNumber < 300) {
		$numbersSummary += $inputNumber;
	}
}

echo($numbersSummary);
?>