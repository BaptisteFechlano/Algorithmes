<?php
$tab = [5, 10, 1, 3, 4, 9, 7, 6, 8, 2];

/*------------------------------------------*/

echo "<p>Avant tri :</p>";
foreach($tab as $value)
	echo $value.' ';

$tab = bubble_sort($tab);

echo "<p>Apres tri :</p>";
foreach($tab as $value)
	echo $value.' ';

/*------------------------------------------*/

function bubble_sort($tabint)
{
	$is_done = false;
	$size = count($tabint) - 1;

	while(!$is_done)
	{
		$is_done = true;

		for($i = 0 ; $i < $size ; $i++)
			if($tabint[$i] > $tabint[$i+1])
			{
				$tmp = $tabint[$i+1];
				$tabint[$i+1] = $tabint[$i];
				$tabint[$i] = $tmp;

				$is_done = false;
			}

		$size--;
	}
	
	return $tabint;
}

?>