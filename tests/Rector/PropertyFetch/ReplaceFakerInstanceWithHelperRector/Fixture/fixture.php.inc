<?php
use Illuminate\Database\Eloquent\Factories\Factory;

class UserFactory extends Factory
{
    public function definition()
    {
        return [
            'name' => $this->faker->name,
            'email' => $this->faker->unique()->safeEmail,
            'another_name' => $this->faker->name(),
            'another_email' => $this->faker->unique()->safeEmail(),
            'should_work_with_this' => "test_".$this->faker->unique()->safeEmail."_done",
            'with_string_interpolation_property' => "test_{$this->faker->unique()->safeEmail}_done",
            'with_string_interpolation_method_call' => "test_{$this->faker->unique()->safeEmail()}_done",
        ];
    }
}
?>
-----
<?php
use Illuminate\Database\Eloquent\Factories\Factory;

class UserFactory extends Factory
{
    public function definition()
    {
        return [
            'name' => fake()->name,
            'email' => fake()->unique()->safeEmail,
            'another_name' => fake()->name(),
            'another_email' => fake()->unique()->safeEmail(),
            'should_work_with_this' => "test_".fake()->unique()->safeEmail."_done",
            'with_string_interpolation_property' => "test_{$this->faker->unique()->safeEmail}_done",
            'with_string_interpolation_method_call' => "test_{$this->faker->unique()->safeEmail()}_done",
        ];
    }
}
?>
