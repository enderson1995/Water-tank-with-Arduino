define(['angular', 'require'], function(angular, require) {
    'use strict';
    WaterTankController.$inject = ['$scope'];
    function WaterTankController($scope) {
    this.$onInit = () => {
            this.title = 'Sistema de monitoreo de tanque de agua';
        };
    }
    return {
        bindings: {},
        controller: WaterTankController,
        templateUrl: require.toUrl('../html/waterTank.html')
    };
        
    });